-- Função para mover o cursor e simular um clique
function moverCursorEclicar(monitorIndex)
    local monitores = hs.screen.allScreens()
    local destino = monitores[monitorIndex]

    if not destino then
        hs.alert("Monitor " .. monitorIndex .. " não encontrado")
        return
    end

    local centro = hs.geometry.rectMidPoint(destino:frame())
    hs.mouse.setAbsolutePosition(centro)

    -- Pequeno atraso para garantir posicionamento
    hs.timer.doAfter(0.1, function()
        hs.eventtap.leftClick(centro)
    end)
end

-- F1 → Monitor 1 (mover + clique)
hs.hotkey.bind({}, "F1", function()
    moverCursorEclicar(1)
end)

-- F2 → Monitor 2 (mover + clique)
hs.hotkey.bind({}, "F2", function()
    moverCursorEclicar(2)
end)

-- Bloqueia a tela
hs.hotkey.bind({}, "F5", function()
    hs.caffeinate.lockScreen()
end)
