#pragma once
#include <cstdint>

namespace offsets {
    namespace client_dll {
        constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x1823A08;
        constexpr std::ptrdiff_t dwViewMatrix = 0x1925350;
        constexpr std::ptrdiff_t dwEntityList = 0x18C1DB8;
        constexpr std::ptrdiff_t dwViewAngles = 0x1933930;
        constexpr std::ptrdiff_t dwLocalPlayerController = 0x1911528;
    }
    namespace CCSPlayer_MovementServices {
        constexpr std::ptrdiff_t m_flMaxJumpHeightThisJump = 0x4D0;
        constexpr std::ptrdiff_t m_flStamina = 0x4C8;
        constexpr std::ptrdiff_t m_flDuckAmount = 0x228;
        constexpr std::ptrdiff_t m_bDesiresDuck = 0x231;
    }
    namespace C_BaseEntity {
        constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
        constexpr std::ptrdiff_t m_iHealth = 0x344;
        constexpr std::ptrdiff_t m_pGameSceneNode = 0x328;
        constexpr std::ptrdiff_t m_fFlags = 0x3EC;
        constexpr std::ptrdiff_t m_hOwnerEntity = 0x440;
    }
    namespace C_BaseModelEntity {
        constexpr std::ptrdiff_t m_vecViewOffset = 0xCB0;
    }
    namespace CGameSceneNode {
        constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0;
    }
    namespace C_CSPlayerPawn {
        constexpr std::ptrdiff_t m_pBulletServices = 0x1518;
        constexpr std::ptrdiff_t m_pHostageServices = 0x1520;
        constexpr std::ptrdiff_t m_pBuyServices = 0x1528;
        constexpr std::ptrdiff_t m_pGlowServices = 0x1530;
        constexpr std::ptrdiff_t m_pActionTrackingServices = 0x1538;
        constexpr std::ptrdiff_t m_flHealthShotBoostExpirationTime = 0x1548;
        constexpr std::ptrdiff_t m_bHasFemaleVoice = 0x1550;
        constexpr std::ptrdiff_t m_szLastPlaceName = 0x155C;
        constexpr std::ptrdiff_t m_bInBuyZone = 0x1580;
        constexpr std::ptrdiff_t m_aimPunchAngle = 0x1584;
        constexpr std::ptrdiff_t m_aimPunchAngleVel = 0x1590;
        constexpr std::ptrdiff_t m_aimPunchTickBase = 0x159C;
        constexpr std::ptrdiff_t m_aimPunchTickFraction = 0x15A0;
        constexpr std::ptrdiff_t m_bInHostageRescueZone = 0x15D0;
        constexpr std::ptrdiff_t m_bInBombZone = 0x15D1;
        constexpr std::ptrdiff_t m_bIsBuyMenuOpen = 0x15D2;
        constexpr std::ptrdiff_t m_flTimeOfLastInjury = 0x15D4;
        constexpr std::ptrdiff_t m_flNextSprayDecalTime = 0x15D8;
        constexpr std::ptrdiff_t m_EconGloves = 0x1768;
        constexpr std::ptrdiff_t m_nEconGlovesChanged = 0x1BB0;
        constexpr std::ptrdiff_t m_qDeathEyeAngles = 0x22B4;
        constexpr std::ptrdiff_t m_bLeftHanded = 0x22C1;
        constexpr std::ptrdiff_t m_flViewmodelOffsetX = 0x22C8;
        constexpr std::ptrdiff_t m_flViewmodelOffsetY = 0x22CC;
        constexpr std::ptrdiff_t m_flViewmodelOffsetZ = 0x22D0;
        constexpr std::ptrdiff_t m_flViewmodelFOV = 0x22D4;
        constexpr std::ptrdiff_t m_vecPlayerPatchEconIndices = 0x22D8;
        constexpr std::ptrdiff_t m_entitySpottedState = 0x23D0;
        constexpr std::ptrdiff_t m_bIsScoped = 0x23E8;
        constexpr std::ptrdiff_t m_bIsDefusing = 0x23EA;
        constexpr std::ptrdiff_t m_bIsGrabbingHostage = 0x23EB;
        constexpr std::ptrdiff_t m_iBlockingUseActionInProgress = 0x23EC;
        constexpr std::ptrdiff_t m_iShotsFired = 0x23FC;
        constexpr std::ptrdiff_t m_flVelocityModifier = 0x2404;
        constexpr std::ptrdiff_t m_bKilledByHeadshot = 0x2419;
        constexpr std::ptrdiff_t m_ArmorValue = 0x241C;
        constexpr std::ptrdiff_t m_unCurrentEquipmentValue = 0x2420;
        constexpr std::ptrdiff_t m_unRoundStartEquipmentValue = 0x2422;
        constexpr std::ptrdiff_t m_unFreezetimeEndEquipmentValue = 0x2424;
        constexpr std::ptrdiff_t m_nLastKillerIndex = 0x2428;
    }
    namespace C_CSPlayerPawnBase {
        constexpr std::ptrdiff_t m_pViewModelServices = 0x1368;
        constexpr std::ptrdiff_t m_iPlayerState = 0x13AC;
        constexpr std::ptrdiff_t m_fMolotovDamageTime = 0x13C4;
        constexpr std::ptrdiff_t m_bHasMovedSinceSpawn = 0x13BD;
        constexpr std::ptrdiff_t m_flFlashMaxAlpha = 0x1408;
        constexpr std::ptrdiff_t m_flFlashDuration = 0x140C;
        constexpr std::ptrdiff_t m_angEyeAngles = 0x1438;
        constexpr std::ptrdiff_t m_hOriginalController = 0x1508;
    }
    namespace CCSPlayerController {
        constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x778;
        constexpr std::ptrdiff_t m_hPlayerPawn = 0x824;
        constexpr std::ptrdiff_t m_iScore = 0x84C;
        constexpr std::ptrdiff_t m_iMVPs = 0x868;
    }
    namespace C_BasePlayerWeapon {
        constexpr std::ptrdiff_t m_nNextPrimaryAttackTick = 0x1668;
        constexpr std::ptrdiff_t m_nNextSecondaryAttackTick = 0x1670;
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
    namespace C_CSWeaponBaseGun {
        constexpr std::ptrdiff_t m_zoomLevel = 0x1B20;
        constexpr std::ptrdiff_t m_iBurstShotsRemaining = 0x1B24;
    }
    namespace C_SmokeGrenadeProjectile {
        constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0x1210;
        constexpr std::ptrdiff_t m_bDidSmokeEffect = 0x1214;
        constexpr std::ptrdiff_t m_vSmokeColor = 0x121C;
    }
    namespace C_Inferno {
        constexpr std::ptrdiff_t m_bFireIsBurning = 0x1398;
        constexpr std::ptrdiff_t m_fireCount = 0x16D8;
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
    namespace C_CSGameRules {
        constexpr std::ptrdiff_t m_bFreezePeriod = 0x40;
        constexpr std::ptrdiff_t m_bWarmupPeriod = 0x41;
        constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x98;
        constexpr std::ptrdiff_t m_bBombPlanted = 0x9A5;
        constexpr std::ptrdiff_t m_iRoundWinStatus = 0x9A8;
        constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x84;
    }
    namespace server_dll {
        constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
        constexpr std::ptrdiff_t m_iHealth = 0x344;
        constexpr std::ptrdiff_t m_pGameSceneNode = 0x328;
        constexpr std::ptrdiff_t m_fFlags = 0x3EC;
        constexpr std::ptrdiff_t m_hOwnerEntity = 0x440;
        constexpr std::ptrdiff_t m_ArmorValue = 0x1A0C;
        constexpr std::ptrdiff_t m_bIsScoped = 0x1984;
        constexpr std::ptrdiff_t m_bIsDefusing = 0x1986;
        constexpr std::ptrdiff_t m_aimPunchAngle = 0xF10;
        constexpr std::ptrdiff_t m_entitySpottedState = 0x1968;
        constexpr std::ptrdiff_t m_bHasHelmet = 0x41;
        constexpr std::ptrdiff_t m_bHasHeavyArmor = 0x42;
        constexpr std::ptrdiff_t m_pWeaponServices = 0xAC0;
        constexpr std::ptrdiff_t m_pItemServices = 0xAC8;
        constexpr std::ptrdiff_t m_hPlayerPawn = 0x8AC;
        constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x7E8;
        constexpr std::ptrdiff_t m_nSmokeEffectTickBegin = 0xB68;
        constexpr std::ptrdiff_t m_bDidSmokeEffect = 0xB6C;
        constexpr std::ptrdiff_t m_vInitialVelocity = 0xAEC;
        constexpr std::ptrdiff_t m_nBounces = 0xAF8;
        constexpr std::ptrdiff_t m_bBombTicking = 0x9B0;
        constexpr std::ptrdiff_t m_flC4Blow = 0x9B4;
        constexpr std::ptrdiff_t m_flTimerLength = 0xD28;
        constexpr std::ptrdiff_t m_bBeingDefused = 0xD2C;
        constexpr std::ptrdiff_t m_flDefuseLength = 0xD3C;
        constexpr std::ptrdiff_t m_flDefuseCountDown = 0xD40;
        constexpr std::ptrdiff_t m_hBombDefuser = 0xD48;
        constexpr std::ptrdiff_t m_bFreezePeriod = 0xC8;
        constexpr std::ptrdiff_t m_bWarmupPeriod = 0xC9;
        constexpr std::ptrdiff_t m_bIsQueuedMatchmaking = 0x120;
        constexpr std::ptrdiff_t m_bBombPlanted = 0xA2D;
        constexpr std::ptrdiff_t m_iRoundWinStatus = 0xA30;
        constexpr std::ptrdiff_t m_totalRoundsPlayed = 0x10C;
    }
}

