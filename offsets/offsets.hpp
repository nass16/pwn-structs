#pragma once
#include <cstddef>

namespace offsets {
    namespace client_dll {
        namespace C_BaseEntity {
            constexpr std::ptrdiff_t m_pGameSceneNode = 0x328;
            constexpr std::ptrdiff_t m_iHealth = 0x344;
            constexpr std::ptrdiff_t m_iMaxHealth = 0x348;
            constexpr std::ptrdiff_t m_lifeState = 0x34C;
            constexpr std::ptrdiff_t m_bTakesDamage = 0x351;
            constexpr std::ptrdiff_t m_nTakeDamageFlags = 0x354;
            constexpr std::ptrdiff_t m_bIsPlatform = 0x358;
            constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
            constexpr std::ptrdiff_t m_fFlags = 0x3EC;
            constexpr std::ptrdiff_t m_hOwnerEntity = 0x440;
            constexpr std::ptrdiff_t m_flSimulationTime = 0x498;
        }
        namespace C_CSPlayerPawn {
            constexpr std::ptrdiff_t m_pBulletServices = 0x1518;
            constexpr std::ptrdiff_t m_pHostageServices = 0x1520;
            constexpr std::ptrdiff_t m_pBuyServices = 0x1528;
            constexpr std::ptrdiff_t m_pGlowServices = 0x1530;
            constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1538;
            constexpr std::ptrdiff_t m_szLastPlaceName = 0x155C;
            constexpr std::ptrdiff_t m_bInBuyZone = 0x1580;
            constexpr std::ptrdiff_t m_aimPunchAngle = 0x1584;
            constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1590;
            constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x15D0;
            constexpr std::ptrdiff_t m_bInBombZone = 0x15D1;
            constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x15D2;
            constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x15D4;
            constexpr std::ptrdiff_t m_EconGloves = 0x1768;
            constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x22D8;
            constexpr std::ptrdiff_t m_entitySpottedState = 0x23D0;
            constexpr std::ptrdiff_t m_bIsScoped = 0x23E8;
            constexpr std::ptrdiff_t m_bIsDefusing = 0x23EA;
            constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x23EB;
            constexpr std::ptrdiff_t m_iShotsFired = 0x23FC;
            constexpr std::ptrdiff_t m_flVelocityModifier = 0x2404;
            constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2419;
            constexpr std::ptrdiff_t m_ArmorValue = 0x241C;
        }
        namespace C_CSPlayerPawnBase {
            constexpr std::ptrdiff_t m_pViewModelServices = 0x1368;
            constexpr std::ptrdiff_t m_iPlayerState = 0x13AC;
            constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1408;
            constexpr std::ptrdiff_t m_flFlashDuration = 0x140C;
            constexpr std::ptrdiff_t m_angEyeAngles = 0x1438;
        }
        namespace CCSPlayerController {
            constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x778;
            constexpr std::ptrdiff_t m_hPlayerPawn = 0x824;
            constexpr std::ptrdiff_t m_iScore = 0x8DC;
            constexpr std::ptrdiff_t m_iMVPs = 0x900;
        }
        namespace C_BasePlayerWeapon {
            constexpr std::ptrdiff_t m_iClip1 = 0x1678;
            constexpr std::ptrdiff_t m_pReserveAmmo = 0x1680;
        }
        namespace C_CSWeaponBase {
            constexpr std::ptrdiff_t m_iState = 0x175C;
            constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x17D0;
            constexpr std::ptrdiff_t m_iRecoilIndex = 0x17E0;
            constexpr std::ptrdiff_t m_bInReload = 0x17F8;
            constexpr std::ptrdiff_t m_bSilencerOn = 0x1801;
        }
        namespace C_PlantedC4 {
            constexpr std::ptrdiff_t m_bBombTicking = 0xF90;
            constexpr std::ptrdiff_t m_flC4Blow = 0xFC0;
            constexpr std::ptrdiff_t m_flTimerLength = 0xFC8;
            constexpr std::ptrdiff_t m_bBeingDefused = 0xFCC;
            constexpr std::ptrdiff_t m_flDefuseLength = 0xFDC;
            constexpr std::ptrdiff_t m_flDefuseCountDown = 0xFE0;
            constexpr std::ptrdiff_t m_hBombDefuser = 0xFE8;
        }
        namespace CGameSceneNode {
            constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0;
        }
    }
    namespace server_dll {
        namespace CBasePlayerController {
            constexpr std::ptrdiff_t m_hPawn = 0x5DC;
            constexpr std::ptrdiff_t m_bIsLocalPlayerController = 0x618;
            constexpr std::ptrdiff_t m_steamID = 0x620;
        }
        namespace CBasePlayerPawn {
            constexpr std::ptrdiff_t m_pMovementServices = 0x9E0;
            constexpr std::ptrdiff_t m_pWeaponServices = 0xA28;
            constexpr std::ptrdiff_t m_pItemServices = 0xA30;
            constexpr std::ptrdiff_t m_pObserverServices = 0xA40;
        }
        namespace CBaseEntity {
            constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
            constexpr std::ptrdiff_t m_iHealth = 0x344;
            constexpr std::ptrdiff_t m_fFlags = 0x3EC;
            constexpr std::ptrdiff_t m_hOwnerEntity = 0x440;
        }
        namespace CPlantedC4 {
            constexpr std::ptrdiff_t m_bBombTicking = 0x9B0;
            constexpr std::ptrdiff_t m_flC4Blow = 0x9B4;
            constexpr std::ptrdiff_t m_flTimerLength = 0xD28;
            constexpr std::ptrdiff_t m_bBeingDefused = 0xD2C;
            constexpr std::ptrdiff_t m_hBombDefuser = 0xD48;
        }
    }
    namespace engine2_dll {
        namespace CEngineClient {
            constexpr std::ptrdiff_t m_iGameState = 0x78;
        }
        namespace EngineLoopState_t {
            constexpr std::ptrdiff_t m_nPlatWindowWidth = 0x18;
            constexpr std::ptrdiff_t m_nPlatWindowHeight = 0x1C;
            constexpr std::ptrdiff_t m_nRenderWidth = 0x20;
            constexpr std::ptrdiff_t m_nRenderHeight = 0x24;
        }
    }
    namespace host_dll {
        namespace CAnimScriptBase {
            constexpr std::ptrdiff_t m_bIsValid = 0x8;
        }
    }
    namespace materialsystem2_dll {
        namespace MaterialParamFloat_t {
            constexpr std::ptrdiff_t m_flValue = 0x8;
        }
    }
    namespace networksystem_dll {
        namespace ChangeAccessorFieldPathIndex_t {
            constexpr std::ptrdiff_t m_Value = 0x0;
        }
    }
    namespace rendersystemdx11_dll {
        namespace RenderInputLayoutField_t {
            constexpr std::ptrdiff_t m_pSemanticName = 0x0;
            constexpr std::ptrdiff_t m_nSemanticIndex = 0x20;
            constexpr std::ptrdiff_t m_Format = 0x24;
            constexpr std::ptrdiff_t m_nOffset = 0x28;
            constexpr std::ptrdiff_t m_nSlot = 0x2C;
            constexpr std::ptrdiff_t m_nSlotType = 0x30;
            constexpr std::ptrdiff_t m_nInstanceStepRate = 0x34;
        }
    }
    namespace scenesystem_dll {
        namespace CSSDSMsg_ViewTarget {
            constexpr std::ptrdiff_t m_Name = 0x0;
            constexpr std::ptrdiff_t m_TextureId = 0x8;
            constexpr std::ptrdiff_t m_nWidth = 0x10;
            constexpr std::ptrdiff_t m_nHeight = 0x14;
            constexpr std::ptrdiff_t m_nRequestedWidth = 0x18;
            constexpr std::ptrdiff_t m_nRequestedHeight = 0x1C;
            constexpr std::ptrdiff_t m_nNumMipLevels = 0x20;
            constexpr std::ptrdiff_t m_nDepth = 0x24;
            constexpr std::ptrdiff_t m_nMultisampleNumSamples = 0x28;
            constexpr std::ptrdiff_t m_nFormat = 0x2C;
        }
    }
    namespace vphysics2_dll {
        namespace RnSoftbodySpring_t {
            constexpr std::ptrdiff_t m_nParticle = 0x0;
            constexpr std::ptrdiff_t m_flLength = 0x4;
        }
        namespace FeFitInfluence_t {
            constexpr std::ptrdiff_t nVertexNode = 0x0;
            constexpr std::ptrdiff_t flWeight = 0x4;
            constexpr std::ptrdiff_t nMatrixNode = 0x8;
        }
    }
    namespace worldrenderer_dll {
        namespace CVoxelVisibility {
            constexpr std::ptrdiff_t m_nBaseClusterCount = 0x40;
            constexpr std::ptrdiff_t m_nPVSBytesPerCluster = 0x44;
            constexpr std::ptrdiff_t m_vMinBounds = 0x48;
            constexpr std::ptrdiff_t m_vMaxBounds = 0x54;
            constexpr std::ptrdiff_t m_flGridSize = 0x60;
            constexpr std::ptrdiff_t m_nSkyVisibilityCluster = 0x64;
            constexpr std::ptrdiff_t m_nSunVisibilityCluster = 0x68;
        }
    }
}
