﻿using System;
using Chino.Chip;

namespace Chino.Kernel
{
    public class KernelDebug
    {
        private static void Write(string message)
        {
            ChipControl.Default.Write(message);
        }
    }
}
