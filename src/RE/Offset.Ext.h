#pragma once

namespace RE
{
	namespace Offset
	{
		namespace Actor
		{
			// SkyrimSE 1.6.353: 0x2A69D0
			inline constexpr auto Update3D = MAKE_OFFSET(19316);
		}

		namespace InventoryChanges
		{
			// SkyrimSE 1.6.353: 0x1E4AA0
			inline constexpr auto GetWornMask = MAKE_OFFSET(15806);
			// SkyrimSE 1.6.353: 0x1F08A0
			inline constexpr auto Accept = MAKE_OFFSET(15856);
		}

		namespace InventoryUtils
		{
			namespace GetWornMaskVisitor
			{
				// SkyrimSE 1.6.353: 0x1FB510
				inline constexpr auto Visit = MAKE_OFFSET(15991);
			}
		}

		namespace TESNPC
		{
			// SkyrimSE 1.6.353: 0x37B430
			inline constexpr auto InitWornForm = MAKE_OFFSET(24232);
		}

		namespace TESObjectARMA
		{
			// SkyrimSE 1.6.353: 0x235A00
			inline constexpr auto HasRace = MAKE_OFFSET(17359);
			// SkyrimSE 1.6.353: 0x235D10
			inline constexpr auto InitWornArmorAddon = MAKE_OFFSET(17361);
		}
	}
}
