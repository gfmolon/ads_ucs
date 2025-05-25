-- ===============================
--    Configuração Neovim
-- ===============================

-- Caminho do Python
vim.g.python3_host_prog = '/usr/local/bin/python3'

-- Configurações gerais do Neovim
vim.opt.number = true
vim.opt.relativenumber = false
vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.expandtab = true
vim.opt.termguicolors = true
vim.opt.clipboard = 'unnamedplus'
vim.opt.cursorline = true
vim.opt.swapfile = false
vim.opt.autoindent = true
vim.opt.smartindent = true
vim.opt.smarttab = true
vim.opt.mouse = ''
vim.opt.updatetime = 300
vim.opt.timeoutlen = 500
vim.opt.title = true
vim.opt.titlestring = '%t'

-- Auto salvar ao perder foco
vim.api.nvim_create_autocmd('FocusLost', {
  pattern = '*',
  command = 'silent! wa',
})

-- ===============================
--        Lazy.nvim Setup
-- ===============================
local lazypath = vim.fn.stdpath('data') .. '/lazy/lazy.nvim'
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    'git', 'clone', '--filter=blob:none',
    'https://github.com/folke/lazy.nvim.git', lazypath
  })
end
vim.opt.rtp:prepend(lazypath)

-- ===============================
--     Instalação dos Plugins
-- ===============================
require('lazy').setup({
  { 'nyoom-engineering/oxocarbon.nvim', priority = 1000 },
  { 'neovim/nvim-lspconfig' },
  {
    'hrsh7th/nvim-cmp',
    dependencies = {
      'hrsh7th/cmp-nvim-lsp',
      'L3MON4D3/LuaSnip'
    }
  },
  { 'nvim-tree/nvim-tree.lua', dependencies = { 'nvim-tree/nvim-web-devicons' } },
  { 'nvim-lualine/lualine.nvim', dependencies = { 'nvim-tree/nvim-web-devicons' } },
  { 'folke/which-key.nvim', config = true },
  {
    'nvim-telescope/telescope.nvim',
    dependencies = { 'nvim-lua/plenary.nvim' }
  },
  {
    'lukas-reineke/indent-blankline.nvim',
    main = 'ibl',
    opts = {}
  },
  { 'numToStr/Comment.nvim', config = true },
  { 'nvimtools/none-ls.nvim', dependencies = { 'nvim-lua/plenary.nvim' } }
})

-- ===============================
--        Tema Oxocarbon
-- ===============================
vim.o.background = 'dark'
vim.cmd('colorscheme oxocarbon')

-- ===============================
--        Configuração Lualine
-- ===============================
require('lualine').setup {
  options = { theme = 'auto' }
}

-- ===============================
--        Configuração Nvim-Tree
-- ===============================
local api = require("nvim-tree.api")

require('nvim-tree').setup({
  sort = { sorter = 'name', folders_first = true },
  sync_root_with_cwd = false,
  view = {
    width = 30,
    side = 'left',
    preserve_window_proportions = true,
    number = false,
    relativenumber = false,
    signcolumn = 'yes'
  },
  renderer = {
    group_empty = true,
    highlight_git = true,
    icons = {
      show = { file = true, folder = true, folder_arrow = true, git = true }
    }
  },
  filters = { dotfiles = false, custom = { '.git', 'node_modules', '.cache' } },
  actions = {
    open_file = {
      quit_on_open = false,
      window_picker = { enable = false }
    }
  },
  git = { enable = true, ignore = false },
  hijack_netrw = true,
  open_on_tab = false,
  reload_on_bufenter = true,
  update_focused_file = { enable = true, update_root = false },
  on_attach = function(bufnr)
    local function opts(desc)
      return { desc = "nvim-tree: " .. desc, buffer = bufnr, noremap = true, silent = true, nowait = true }
    end
    api.config.mappings.default_on_attach(bufnr)
    vim.keymap.set('n', '<CR>', api.node.open.edit, opts('Open File'))
    vim.keymap.set('n', 'g', api.node.open.edit, opts('Open File'))
  end,
})

-- ===============================
--        Atalhos de Teclado
-- ===============================
vim.keymap.set('n', '<C-n>', ':NvimTreeToggle<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<C-z>', ':NvimTreeFocus<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<C-f>', ':NvimTreeFocus<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<leader>ff', ':Telescope find_files<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<leader>fg', ':Telescope live_grep<CR>', { noremap = true, silent = true })
vim.keymap.set('n', ';', ':', { noremap = true })
vim.keymap.set('v', ';', ':', { noremap = true })

-- ===============================
--       Terminal Integrado
-- ===============================
vim.api.nvim_command('command! -nargs=0 T botright split | terminal')

vim.api.nvim_create_autocmd('TermOpen', {
  pattern = '*',
  callback = function()
    vim.cmd('startinsert')
  end,
})

vim.api.nvim_create_autocmd('BufEnter', {
  pattern = '*',
  callback = function()
    vim.cmd('lcd %:p:h')
  end,
})

-- ===============================
--    Formatação automática com None-LS
-- ===============================
local null_ls = require("null-ls")
local formatting = null_ls.builtins.formatting

null_ls.setup({
  sources = {
    formatting.black.with({ extra_args = { "--fast" } }), -- Python
    formatting.clang_format, -- C/C++
  },
  on_attach = function(client, bufnr)
    if client.supports_method("textDocument/formatting") then
      vim.api.nvim_create_autocmd("BufWritePre", {
        buffer = bufnr,
        callback = function()
          vim.lsp.buf.format({ bufnr = bufnr })
        end,
      })
    end
  end,
})
