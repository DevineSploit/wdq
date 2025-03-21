getgenv().Grim = {
    ["Setup"] = {
        Loaded = true,
        Remote = "MainEvent",
        Arg = "MousePosUpdate"
    },
    ["Silent"] = {
        Enabled = true,
        HitPart = "HumanoidRootPart",
        AirPart = "LowerTorso",
        JumpOffset = 0.2,
        Keybind = {
            Type = "Keyboard", -- Or "Mouse"
            Bind = Enum.KeyCode.T -- Or Enum.UserInputType.MouseButton1 / MouseButton2 for Mouse
        },
        Prediction = {
            AutoPred = false,
            Enable_Axis = false,
            X_Axis = 0.5,
            Y_Axis = 0.2,
            Regular_Prediction = 0.14628200230907185
        },
        FOV = {
            Visible = true,
            Radius = 150,
            Color = Color3.fromRGB(255, 0, 0),
            Transparency = 1,
            Thickness = 2
        }
    },
    ["Camlock"] = {
        Enabled = false,
        HitPart = "HumanoidRootPart",
        AirPart = "LowerTorso",
        JumpOffset = 0.1,
        Keybind = {
            Type = "Keyboard",
            Bind = Enum.KeyCode.E -- Change Binds to nil if u dont wanna toggle/use at all

        },
        Prediction = {
            AutoPred = false,
            Enable_Axis = false,
            X_Axis = 0.5,
            Y_Axis = 0.2,
            Regular_Prediction = 0.1488375834163075
        },
        Smoothness = {
            Easing = "Enum.EasingStyle.Elastic",
            X_Axis = 0.4,
            Y_Axis = 0.4,
            Direction = "Enum.EasingDirection.InOut"
        },
        FOV = {
            Visible = false,
            Radius = 200,
            Color = Color3.fromRGB(0, 0, 255),
            Transparency = 0.3,
            Thickness = 0.5
        }
    },
    Checks = {
        Dead = false,
        Grabbed = false,
        Visible = false
    }
}
loadstring(game:HttpGet("https://raw.githubusercontent.com/arrayofbytes/grimekittenpower/main/uwu/dhstreamable.lua"))()
