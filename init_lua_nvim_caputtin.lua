-- ===============================
-- Configuração Neovim moderna
-- ===============================

vim.g.python3_host_prog = '/usr/local/bin/python3'

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
vim.opt.mouse = ''
vim.opt.updatetime = 300
vim.opt.timeoutlen = 500
vim.opt.title = true
vim.opt.titlestring = '%t'

vim.api.nvim_create_autocmd('FocusLost', {
  pattern = '*',
  command = 'silent! wa',
})

-- ===============================
-- Lazy.nvim Bootstrap
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
-- Plugins com Lazy
-- ===============================
require('lazy').setup({
  {
    'catppuccin/nvim',
    name = 'catppuccin',
    priority = 1000,
    config = function()
      vim.cmd.colorscheme("catppuccin")
    end,
  },

  { 'nvim-lualine/lualine.nvim', dependencies = { 'nvim-tree/nvim-web-devicons' } },
  { 'nvim-tree/nvim-tree.lua', dependencies = { 'nvim-tree/nvim-web-devicons' } },
  { 'nvim-telescope/telescope.nvim', dependencies = { 'nvim-lua/plenary.nvim' } },
  { 'neovim/nvim-lspconfig' },
  {
    'hrsh7th/nvim-cmp',
    dependencies = {
      'hrsh7th/cmp-nvim-lsp',
      'L3MON4D3/LuaSnip'
    }
  }
})

-- ===============================
-- Configurações dos Plugins
-- ===============================

-- Lualine (configurado de forma independente)
require('lualine').setup {
  options = { theme = 'catppuccin' }
}

require('nvim-tree').setup({
  -- ...
  on_attach = function(bufnr)
    local api = require("nvim-tree.api")
    local function opts(desc)
      return { desc = "nvim-tree: " .. desc, buffer = bufnr, noremap = true, silent = true, nowait = true }
    end
    api.config.mappings.default_on_attach(bufnr)
    vim.keymap.set('n', '<CR>', api.node.open.edit, opts('Abrir arquivo com foco'))
    vim.keymap.set('n', 'g', api.node.open.edit, opts('Abrir arquivo com foco'))
  end
})

-- LSP (pyright como exemplo)
local lspconfig = require('lspconfig')
local capabilities = require('cmp_nvim_lsp').default_capabilities()

lspconfig.pyright.setup {
  capabilities = capabilities
}
-- ===============================
-- Atalhos personalizados
-- ===============================

-- Abrir NvimTree
vim.keymap.set('n', '<C-n>', ':NvimTreeToggle<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<C-f>', ':NvimTreeFocus<CR>', { noremap = true, silent = true })

-- Telescope
vim.keymap.set('n', '<leader>ff', ':Telescope find_files<CR>', { noremap = true, silent = true })
vim.keymap.set('n', '<leader>fg', ':Telescope live_grep<CR>', { noremap = true, silent = true })

-- Reforça ":" com ";" no modo normal e visual
vim.keymap.set('n', ';', ':', { noremap = true })
vim.keymap.set('v', ';', ':', { noremap = true })

-- ===============================
-- Terminal integrado :T
-- ===============================
vim.api.nvim_create_user_command("T", "botright split | terminal", {})

-- Entrar em modo de inserção automaticamente ao abrir o terminal
vim.api.nvim_create_autocmd("TermOpen", {
  pattern = "*",
  callback = function()
    vim.cmd("startinsert")
  end,
})

-- Atualiza diretório ao mudar de buffer
vim.api.nvim_create_autocmd("BufEnter", {
  pattern = "*",
  callback = function()
    vim.cmd("lcd %:p:h")
  end,
})

 
vim.keymap.set('n', '<leader>ff', ':Telescope find_files<CR>', { noremap = true, silent = true })      -- buscar arquivos
vim.keymap.set('n', '<leader>fg', ':Telescope live_grep<CR>', { noremap = true, silent = true })       -- buscar texto
vim.keymap.set('n', '<leader>fb', ':Telescope buffers<CR>', { noremap = true, silent = true })         -- buffers abertos
vim.keymap.set('n', '<leader>fh', ':Telescope help_tags<CR>', { noremap = true, silent = true })       -- ajuda
vim.keymap.set('n', '<leader>fo', ':Telescope oldfiles<CR>', { noremap = true, silent = true })        -- arquivos recentes
