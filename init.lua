-- Caminho para Python
vim.g.python3_host_prog = 'C:\\Users\\Usuario\\AppData\\Local\\Programs\\Python\\Python311\\python.exe'

-- Definições básicas
vim.opt.number = true
vim.opt.relativenumber = true
vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.expandtab = true
vim.opt.termguicolors = true
vim.opt.clipboard = "unnamedplus"

-- Atalho: Ctrl+t abre terminal dividido na horizontal
vim.keymap.set('n', '<C-t>', ':belowright split | terminal<CR>', { noremap = true, silent = true })

-- Autocomando que insere 3 linhas vazias no fim do arquivo (não recomendado p/ código)
vim.api.nvim_create_autocmd("BufWritePre", {
  pattern = "*",
  callback = function()
    local lastline = vim.fn.line('$')
    local line = vim.fn.getline(lastline)
    if line ~= "" then
      vim.fn.append(lastline, {"", ""})
    end
  end
})

-- Instala o Lazy.nvim (gerenciador de plugins)
local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    "git", "clone", "--filter=blob:none",
    "https://github.com/folke/lazy.nvim.git", lazypath
  })
end
vim.opt.rtp:prepend(lazypath)

-- Plugins
require("lazy").setup({
  -- Temas
  { "olimorris/onedarkpro.nvim" },

  -- LSP
  { "neovim/nvim-lspconfig" },

  -- Autocompletar
  {
    "hrsh7th/nvim-cmp",
    dependencies = {
      "hrsh7th/cmp-nvim-lsp",
      "L3MON4D3/LuaSnip",
    }
  },

  -- Nvim Tree
  { "nvim-tree/nvim-tree.lua", dependencies = { "nvim-tree/nvim-web-devicons" } },

  -- Lualine
  { "nvim-lualine/lualine.nvim", dependencies = { "nvim-tree/nvim-web-devicons" } },
})

-- Tema
vim.cmd("colorscheme onedark")

-- LSP Python e C
local lspconfig = require("lspconfig")
lspconfig.pyright.setup{}
lspconfig.clangd.setup{}

-- Autocompletion
local cmp = require'cmp'
cmp.setup({
  mapping = {
    ['<Tab>'] = cmp.mapping.select_next_item(),
    ['<S-Tab>'] = cmp.mapping.select_prev_item(),
    ['<CR>'] = cmp.mapping.confirm({ select = true }),
  },
  sources = {
    { name = 'nvim_lsp' }
  }
})

-- Nvim Tree
require("nvim-tree").setup()
vim.keymap.set('n', '<C-n>', ':NvimTreeToggle<CR>')

-- Lualine
require('lualine').setup {
  options = { theme = 'onedark' }
}

vim.opt.swapfile = false  -- Desativa a criação de arquivos de swap

-- Configura o shell para o cmd.exe completo no Windows
if vim.fn.has('win32') or vim.fn.has('win64') then
  vim.opt.shell = 'C:\\Windows\\System32\\cmd.exe'
  vim.opt.shellcmdflag = '/C'
  vim.opt.shellquote = '"'
  vim.opt.shellxquote = ''
end


-- Substitui o comando :term para abrir o terminal na parte inferior
vim.api.nvim_command('command! -nargs=0 Term botright split | terminal')


