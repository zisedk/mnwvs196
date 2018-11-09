#pragma once

class OutPacket;

#define ADD_TS_FLAG(flag, value) static const int TS_##flag = value;
#define GET_TS_FLAG(flagName) TemporaryStat::TS_Flag(TemporaryStat::TS_##flagName)

struct TemporaryStat
{
	class TS_Flag {
	private:
		bool bEmpty = true;
		static const int FLAG_COUNT = 17;
		int m_aData[FLAG_COUNT], m_nFlagPos;

	public:
		TS_Flag();
		TS_Flag(int dwFlagValue);
		void Encode(OutPacket *oPacket);
		TS_Flag& operator |= (const TS_Flag& rhs);
		bool operator & (const TS_Flag& rhs);
		bool IsEmpty() const;

		static TS_Flag GetDefault();
	};

	ADD_TS_FLAG(IndiePAD, 0);
	ADD_TS_FLAG(IndieMAD, 1);
	ADD_TS_FLAG(IndiePDD, 2);
	ADD_TS_FLAG(IndieMDD, 3);
	ADD_TS_FLAG(IndieMHP, 4);
	ADD_TS_FLAG(IndieMHPR, 5);
	ADD_TS_FLAG(IndieMMP, 6);
	ADD_TS_FLAG(IndieMMPR, 7);
	ADD_TS_FLAG(IndieACC, 8);
	ADD_TS_FLAG(IndieEVA, 9);
	ADD_TS_FLAG(IndieJump, 10);
	ADD_TS_FLAG(IndieSpeed, 11);
	ADD_TS_FLAG(IndieAllStat, 12);
	ADD_TS_FLAG(IndieDodgeCriticalTime, 13);
	ADD_TS_FLAG(IndieEXP, 14);
	ADD_TS_FLAG(IndieBooster, 15);
	ADD_TS_FLAG(IndieFixedDamageR, 16);
	ADD_TS_FLAG(PyramidStunBuff, 17);
	ADD_TS_FLAG(PyramidFrozenBuff, 18);
	ADD_TS_FLAG(PyramidFireBuff, 19);
	ADD_TS_FLAG(PyramidBonusDamageBuff, 20);
	ADD_TS_FLAG(IndieRelaxEXP, 21);
	ADD_TS_FLAG(IndieSTR, 22);
	ADD_TS_FLAG(IndieDEX, 23);
	ADD_TS_FLAG(IndieINT, 24);
	ADD_TS_FLAG(IndieLUK, 25);
	ADD_TS_FLAG(IndieDamR, 26);
	ADD_TS_FLAG(IndieScriptBuff, 27);
	ADD_TS_FLAG(IndieMDF, 28);
	ADD_TS_FLAG(IndieMaxDamageOver, 29);
	ADD_TS_FLAG(IndieAsrR, 30);
	ADD_TS_FLAG(IndieTerR, 31);
	ADD_TS_FLAG(IndieCr, 32);
	ADD_TS_FLAG(IndiePDDR, 33);
	ADD_TS_FLAG(IndieCrMax, 34);
	ADD_TS_FLAG(IndieBDR, 35);
	ADD_TS_FLAG(IndieStatR, 36);
	ADD_TS_FLAG(IndieStance, 37);
	ADD_TS_FLAG(IndieIgnoreMobpdpR, 38);
	ADD_TS_FLAG(IndieEmpty, 39);
	ADD_TS_FLAG(IndiePADR, 40);
	ADD_TS_FLAG(IndieMADR, 41);
	ADD_TS_FLAG(IndieCrMaxR, 42);
	ADD_TS_FLAG(IndieEVAR, 43);
	ADD_TS_FLAG(IndieMDDR, 44);
	ADD_TS_FLAG(IndieDrainHP, 45);
	ADD_TS_FLAG(IndiePMdR, 46);
	ADD_TS_FLAG(IndieMaxDamageOverR, 47);
	ADD_TS_FLAG(IndieForceJump, 48);
	ADD_TS_FLAG(IndieForceSpeed, 49);
	ADD_TS_FLAG(IndieQrPointTerm, 50);

	ADD_TS_FLAG(INDIE_STAT_COUNT, 52);
	ADD_TS_FLAG(PAD, 54);
	ADD_TS_FLAG(PDD, 55);
	ADD_TS_FLAG(MAD, 56);
	ADD_TS_FLAG(MDD, 57);
	ADD_TS_FLAG(ACC, 58);
	ADD_TS_FLAG(EVA, 59);
	ADD_TS_FLAG(Craft, 59);
	ADD_TS_FLAG(Speed, 60);
	ADD_TS_FLAG(Jump, 61);
	ADD_TS_FLAG(MagicGuard, 62);
	ADD_TS_FLAG(DarkSight, 63);
	ADD_TS_FLAG(Booster, 64);
	ADD_TS_FLAG(PowerGuard, 65);
	ADD_TS_FLAG(MaxHP, 66);
	ADD_TS_FLAG(MaxMP, 67);
	ADD_TS_FLAG(Invincible, 68);
	ADD_TS_FLAG(SoulArrow, 69);
	ADD_TS_FLAG(Stun, 70);
	ADD_TS_FLAG(Poison, 71);
	ADD_TS_FLAG(Seal, 72);
	ADD_TS_FLAG(Darkness, 73);
	ADD_TS_FLAG(Summon, 74);
	ADD_TS_FLAG(ComboCounter, 74);
	ADD_TS_FLAG(WeaponCharge, 75);
	ADD_TS_FLAG(HolySymbol, 76);
	ADD_TS_FLAG(MesoUp, 77);
	ADD_TS_FLAG(ShadowPartner, 78);
	ADD_TS_FLAG(PickPocket, 79);
	ADD_TS_FLAG(MesoGuard, 80);
	ADD_TS_FLAG(Thaw, 81);
	ADD_TS_FLAG(Weakness, 82);
	ADD_TS_FLAG(Curse, 83);
	ADD_TS_FLAG(Slow, 84);
	ADD_TS_FLAG(Morph, 85);
	ADD_TS_FLAG(Regen, 86);
	ADD_TS_FLAG(BasicStatUp, 87);
	ADD_TS_FLAG(Stance, 88);
	ADD_TS_FLAG(SharpEyes, 89);
	ADD_TS_FLAG(ManaReflection, 90);
	ADD_TS_FLAG(Attract, 91);
	ADD_TS_FLAG(NoBulletConsume, 92);
	ADD_TS_FLAG(Infinity, 93);
	ADD_TS_FLAG(AdvancedBless, 94);
	ADD_TS_FLAG(IllusionStep, 95);
	ADD_TS_FLAG(Blind, 96);
	ADD_TS_FLAG(Concentration, 97);
	ADD_TS_FLAG(BanMap, 98);
	ADD_TS_FLAG(MaxLevelBuff, 99);
	ADD_TS_FLAG(MesoUpByItem, 100);
	ADD_TS_FLAG(Ghost, 101);
	ADD_TS_FLAG(Barrier, 102);
	ADD_TS_FLAG(ReverseInput, 103);
	ADD_TS_FLAG(ItemUpByItem, 104);
	ADD_TS_FLAG(RespectPImmune, 105);
	ADD_TS_FLAG(RespectMImmune, 106);
	ADD_TS_FLAG(DefenseAtt, 107);
	ADD_TS_FLAG(DefenseState, 108);
	ADD_TS_FLAG(DojangBerserk, 109);
	ADD_TS_FLAG(DojangInvincible, 110);
	ADD_TS_FLAG(DojangShield, 111);
	ADD_TS_FLAG(SoulMasterFinal, 112);
	ADD_TS_FLAG(WindBreakerFinal, 113);
	ADD_TS_FLAG(ElementalReset, 114);
	ADD_TS_FLAG(HideAttack, 115);
	ADD_TS_FLAG(EventRate, 116);
	ADD_TS_FLAG(ComboAbilityBuff, 117);
	ADD_TS_FLAG(ComboDrain, 118);
	ADD_TS_FLAG(ComboBarrier, 119);
	ADD_TS_FLAG(BodyPressure, 120);
	ADD_TS_FLAG(RepeatEffect, 121);
	ADD_TS_FLAG(ExpBuffRate, 122);
	ADD_TS_FLAG(StopPortion, 123);
	ADD_TS_FLAG(StopMotion, 124);
	ADD_TS_FLAG(Fear, 125);
	ADD_TS_FLAG(HiddenPieceOn, 126);
	ADD_TS_FLAG(MagicShield, 127);
	ADD_TS_FLAG(MagicResistance, 128);
	ADD_TS_FLAG(SoulStone, 129);
	ADD_TS_FLAG(Flying, 130);
	ADD_TS_FLAG(Frozen, 131);
	ADD_TS_FLAG(AssistCharge, 132);
	ADD_TS_FLAG(Enrage, 133);
	ADD_TS_FLAG(DrawBack, 134);
	ADD_TS_FLAG(NotDamaged, 135);
	ADD_TS_FLAG(FinalCut, 136);
	ADD_TS_FLAG(HowlingAttackDamage, 137);
	ADD_TS_FLAG(BeastFormDamageUp, 138);
	ADD_TS_FLAG(Dance, 139);
	ADD_TS_FLAG(DAMAGE_RATE, 140);

	ADD_TS_FLAG(EMHP, 142);
	ADD_TS_FLAG(EMMP, 143);
	ADD_TS_FLAG(EPAD, 144);
	ADD_TS_FLAG(EMAD, 145);
	ADD_TS_FLAG(EPDD, 146);
	ADD_TS_FLAG(EMDD, 145);
	ADD_TS_FLAG(GUARD, 147);

	ADD_TS_FLAG(Cyclone, 148);
	ADD_TS_FLAG(HowlingCritical, 149);
	ADD_TS_FLAG(HowlingMaxMP, 150);
	ADD_TS_FLAG(HowlingDefence, 151);
	ADD_TS_FLAG(HowlingEvasion, 152);
	ADD_TS_FLAG(Conversion, 153);
	ADD_TS_FLAG(Revive, 154);
	ADD_TS_FLAG(PinkbeanMinibeenMove, 155);
	ADD_TS_FLAG(Sneak, 156);
	ADD_TS_FLAG(Mechanic, 157);
	ADD_TS_FLAG(BeastFormMaxHP, 158);
	ADD_TS_FLAG(Dice, 159);
	ADD_TS_FLAG(BlessingArmor, 160);
	ADD_TS_FLAG(DamR, 161);
	ADD_TS_FLAG(TeleportMasteryOn, 162);

	ADD_TS_FLAG(CombatOrders, 163);
	ADD_TS_FLAG(Beholder, 164);
	ADD_TS_FLAG(DispelItemOption, 165);
	ADD_TS_FLAG(Inflation, 166);
	ADD_TS_FLAG(OnyxDivineProtection, 167);
	ADD_TS_FLAG(Web, 168);
	ADD_TS_FLAG(Bless, 169);
	ADD_TS_FLAG(TimeBomb, 170);
	ADD_TS_FLAG(DisOrder, 171);
	ADD_TS_FLAG(Thread, 172);
	ADD_TS_FLAG(Team, 173);
	ADD_TS_FLAG(Explosion, 174);
	ADD_TS_FLAG(BuffLimit, 175);
	ADD_TS_FLAG(STR, 176);
	ADD_TS_FLAG(INT, 177);
	ADD_TS_FLAG(DEX, 178);
	ADD_TS_FLAG(LUK, 179);
	ADD_TS_FLAG(DispelItemOptionByField, 180);
	ADD_TS_FLAG(DarkTornado, 181);
	ADD_TS_FLAG(PVPDamage, 182);
	ADD_TS_FLAG(PvPScoreBonus, 183);
	ADD_TS_FLAG(PvPInvincible, 184);
	ADD_TS_FLAG(PvPRaceEffect, 185);
	ADD_TS_FLAG(WeaknessMdamage, 186);
	ADD_TS_FLAG(Frozen2, 187);
	ADD_TS_FLAG(PVPDamageSkill, 188);
	ADD_TS_FLAG(AmplifyDamage, 189);
	ADD_TS_FLAG(IceKnight, 190);
	ADD_TS_FLAG(Shock, 191);
	ADD_TS_FLAG(InfinityForce, 192);
	ADD_TS_FLAG(IncMaxHP, 193);
	ADD_TS_FLAG(IncMaxMP, 194);
	ADD_TS_FLAG(HolyMagicShell, 195);
	ADD_TS_FLAG(KeyDownTimeIgnore, 196);
	ADD_TS_FLAG(ArcaneAim, 197);
	ADD_TS_FLAG(MasterMagicOn, 198);
	ADD_TS_FLAG(AsrR, 199);
	ADD_TS_FLAG(TerR, 200);
	ADD_TS_FLAG(DamAbsorbShield, 201);
	ADD_TS_FLAG(DevilishPower, 202);
	ADD_TS_FLAG(Roulette, 203);
	ADD_TS_FLAG(SpiritLink, 204);
	ADD_TS_FLAG(AsrRByItem, 205);
	ADD_TS_FLAG(Event, 206);
	ADD_TS_FLAG(CriticalBuff, 207);
	ADD_TS_FLAG(DropRate, 208);
	ADD_TS_FLAG(PlusExpRate, 209);
	ADD_TS_FLAG(ItemInvincible, 210);
	ADD_TS_FLAG(Awake, 211);
	ADD_TS_FLAG(ItemCritical, 212);
	ADD_TS_FLAG(ItemEvade, 213);
	ADD_TS_FLAG(Event2, 214);

	ADD_TS_FLAG(VampiricTouch, 215);
	ADD_TS_FLAG(DDR, 216);
	ADD_TS_FLAG(IncCriticalDamMin, 217);
	ADD_TS_FLAG(IncCriticalDamMax, 218);
	ADD_TS_FLAG(IncTerR, 219);
	ADD_TS_FLAG(IncAsrR, 220);
	ADD_TS_FLAG(DeathMark, 221);

	ADD_TS_FLAG(UsefulAdvancedBless, 220);
	ADD_TS_FLAG(Lapidification, 221);
	ADD_TS_FLAG(VenomSnake, 222);
	ADD_TS_FLAG(CarnivalAttack, 223);
	ADD_TS_FLAG(CarnivalDefence, 224);
	ADD_TS_FLAG(CarnivalExp, 225);
	ADD_TS_FLAG(SlowAttack, 226);
	ADD_TS_FLAG(PyramidEffect, 227);
	ADD_TS_FLAG(KillingPoint, 228);
	ADD_TS_FLAG(HollowPointBullet, 229);
	ADD_TS_FLAG(KeyDownMoving, 230);
	ADD_TS_FLAG(IgnoreTargetDEF, 231);
	ADD_TS_FLAG(ReviveOnce, 232);
	ADD_TS_FLAG(Invisible, 233);
	ADD_TS_FLAG(EnrageCr, 234);

	ADD_TS_FLAG(EnrageCrDamMin, 235);
	ADD_TS_FLAG(Judgement, 236);
	ADD_TS_FLAG(DojangLuckyBonus, 237);
	ADD_TS_FLAG(PainMark, 238);
	ADD_TS_FLAG(Magnet, 239);
	ADD_TS_FLAG(MagnetArea, 240);

	ADD_TS_FLAG(VampDeath, 243);
	ADD_TS_FLAG(BlessingArmorIncPAD, 244);
	ADD_TS_FLAG(KeyDownAreaMoving, 245);
	ADD_TS_FLAG(Larkness, 246);
	ADD_TS_FLAG(StackBuff, 247);
	ADD_TS_FLAG(BlessOfDarkness, 248);
	ADD_TS_FLAG(AntiMagicShell, 249);
	ADD_TS_FLAG(LifeTidal, 250);
	ADD_TS_FLAG(HitCriDamR, 251);
	ADD_TS_FLAG(SmashStack, 252);
	ADD_TS_FLAG(PartyBarrier, 253);
	ADD_TS_FLAG(ReshuffleSwitch, 254);
	ADD_TS_FLAG(SpecialAction, 255);
	ADD_TS_FLAG(VampDeathSummon, 256);
	ADD_TS_FLAG(StopForceAtomInfo, 257);
	ADD_TS_FLAG(SoulGazeCriDamR, 258);
	ADD_TS_FLAG(SoulRageCount, 259);
	ADD_TS_FLAG(PowerTransferGauge, 260);
	ADD_TS_FLAG(AffinitySlug, 261);
	ADD_TS_FLAG(Trinity, 262);
	ADD_TS_FLAG(IncMaxDamage, 263);
	ADD_TS_FLAG(BossShield, 264);
	ADD_TS_FLAG(MobZoneState, 265);
	ADD_TS_FLAG(GiveMeHeal, 266);
	ADD_TS_FLAG(TouchMe, 267);
	ADD_TS_FLAG(Contagion, 268);
	ADD_TS_FLAG(ComboUnlimited, 269);
	ADD_TS_FLAG(SoulExalt, 270);
	ADD_TS_FLAG(IgnorePCounter, 271);
	ADD_TS_FLAG(IgnoreAllCounter, 272);
	ADD_TS_FLAG(IgnorePImmune, 273);
	ADD_TS_FLAG(IgnoreAllImmune, 274);

	ADD_TS_FLAG(FinalJudgement, 276);
	ADD_TS_FLAG(IceAura, 277);
	ADD_TS_FLAG(FireAura, 278);
	ADD_TS_FLAG(VengeanceOfAngel, 279);
	ADD_TS_FLAG(HeavensDoor, 280);
	ADD_TS_FLAG(Preparation, 281);
	ADD_TS_FLAG(BullsEye, 282);
	ADD_TS_FLAG(IncEffectHPPotion, 283);
	ADD_TS_FLAG(IncEffectMPPotion, 284);
	ADD_TS_FLAG(BleedingToxin, 285);
	ADD_TS_FLAG(IgnoreMobDamR, 286);
	ADD_TS_FLAG(Asura, 287);

	ADD_TS_FLAG(FlipTheCoin, 289);
	ADD_TS_FLAG(UnityOfPower, 290);
	ADD_TS_FLAG(Stimulate, 291);
	ADD_TS_FLAG(ReturnTeleport, 292);
	ADD_TS_FLAG(DropRIncrease, 293);
	ADD_TS_FLAG(IgnoreMobpdpR, 294);
	ADD_TS_FLAG(BDR, 295);
	ADD_TS_FLAG(CapDebuff, 296);
	ADD_TS_FLAG(Exceed, 297);
	ADD_TS_FLAG(DiabolikRecovery, 298);
	ADD_TS_FLAG(FinalAttackProp, 299);
	ADD_TS_FLAG(ExceedOverload, 300);
	ADD_TS_FLAG(OverloadCount, 301);
	ADD_TS_FLAG(BuckShot, 302);
	ADD_TS_FLAG(FireBomb, 303);
	ADD_TS_FLAG(HalfstatByDebuff, 304);
	ADD_TS_FLAG(SurplusSupply, 305);
	ADD_TS_FLAG(SetBaseDamage, 306);
	ADD_TS_FLAG(EVAR, 307);
	ADD_TS_FLAG(NewFlying, 308);
	ADD_TS_FLAG(AmaranthGenerator, 309);
	ADD_TS_FLAG(OnCapsule, 310);
	ADD_TS_FLAG(CygnusElementSkill, 311);
	ADD_TS_FLAG(StrikerHyperElectric, 312);
	ADD_TS_FLAG(EventPointAbsorb, 313);
	ADD_TS_FLAG(EventAssemble, 314);
	ADD_TS_FLAG(StormBringer, 315);
	ADD_TS_FLAG(ACCR, 316);
	ADD_TS_FLAG(DEXR, 317);
	ADD_TS_FLAG(Albatross, 318);
	ADD_TS_FLAG(Translucence, 319);
	ADD_TS_FLAG(PoseType, 320);
	ADD_TS_FLAG(LightOfSpirit, 321);
	ADD_TS_FLAG(ElementSoul, 322);
	ADD_TS_FLAG(GlimmeringTime, 323);
	ADD_TS_FLAG(TrueSight, 324);
	ADD_TS_FLAG(SoulExplosion, 325);
	ADD_TS_FLAG(SoulMP, 326);
	ADD_TS_FLAG(FullSoulMP, 327);
	ADD_TS_FLAG(SoulSkillDamageUp, 328);
	ADD_TS_FLAG(ElementalCharge, 329);
	ADD_TS_FLAG(Restoration, 330);
	ADD_TS_FLAG(CrossOverChain, 331);
	ADD_TS_FLAG(ChargeBuff, 332);
	ADD_TS_FLAG(Reincarnation, 333);
	ADD_TS_FLAG(KnightsAura, 334);
	ADD_TS_FLAG(ChillingStep, 335);
	ADD_TS_FLAG(DotBasedBuff, 336);
	ADD_TS_FLAG(BlessEnsenble, 337);
	ADD_TS_FLAG(ComboCostInc, 338);
	ADD_TS_FLAG(ExtremeArchery, 339);
	ADD_TS_FLAG(NaviFlying, 340);
	ADD_TS_FLAG(QuiverCatridge, 341);
	ADD_TS_FLAG(AdvancedQuiver, 342);
	ADD_TS_FLAG(UserControlMob, 343);
	ADD_TS_FLAG(ImmuneBarrier, 344);
	ADD_TS_FLAG(ArmorPiercing, 345);
	ADD_TS_FLAG(ZeroAuraStr, 346);
	ADD_TS_FLAG(ZeroAuraSpd, 347);
	ADD_TS_FLAG(CriticalGrowing, 348);
	ADD_TS_FLAG(QuickDraw, 349);
	ADD_TS_FLAG(BowMasterConcentration, 350);
	ADD_TS_FLAG(TimeFastABuff, 351);
	ADD_TS_FLAG(TimeFastBBuff, 352);
	ADD_TS_FLAG(GatherDropR, 353);
	ADD_TS_FLAG(AimBox2D, 354);
	ADD_TS_FLAG(IncMonsterBattleCaptureRate, 355);
	ADD_TS_FLAG(CursorSniping, 356);
	ADD_TS_FLAG(DebuffTolerance, 357);
	ADD_TS_FLAG(DotHealHPPerSecond, 358);
	ADD_TS_FLAG(SpiritGuard, 360);
	ADD_TS_FLAG(PreReviveOnce, 361);
	ADD_TS_FLAG(SetBaseDamageByBuff, 362);
	ADD_TS_FLAG(LimitMP, 363);
	ADD_TS_FLAG(ReflectDamR, 364);
	ADD_TS_FLAG(ComboTempest, 365);
	ADD_TS_FLAG(MHPCutR, 366);
	ADD_TS_FLAG(MMPCutR, 367);
	ADD_TS_FLAG(SelfWeakness, 368);
	ADD_TS_FLAG(ElementDarkness, 369);
	ADD_TS_FLAG(FlareTrick, 370);
	ADD_TS_FLAG(Ember, 371);
	ADD_TS_FLAG(Dominion, 372);
	ADD_TS_FLAG(SiphonVitality, 373);
	ADD_TS_FLAG(DarknessAscension, 374);
	ADD_TS_FLAG(BossWaitingLinesBuff, 375);
	ADD_TS_FLAG(DamageReduce, 376);
	ADD_TS_FLAG(ShadowServant, 377);
	ADD_TS_FLAG(ShadowIllusion, 378);
	ADD_TS_FLAG(KnockBack, 379);
	ADD_TS_FLAG(AddAttackCount, 380);
	ADD_TS_FLAG(ComplusionSlant, 381);
	ADD_TS_FLAG(JaguarSummoned, 382);
	ADD_TS_FLAG(JaguarCount, 383);
	ADD_TS_FLAG(SSFShootingAttack, 384);
	ADD_TS_FLAG(DevilCry, 385);
	ADD_TS_FLAG(ShieldAttack, 386);
	ADD_TS_FLAG(BMageAura, 387);
	ADD_TS_FLAG(DarkLighting, 388);
	ADD_TS_FLAG(AttackCountX, 389);
	ADD_TS_FLAG(BMageDeath, 390);
	ADD_TS_FLAG(BombTime, 391);
	ADD_TS_FLAG(NoDebuff, 392);
	ADD_TS_FLAG(BattlePvP_Mike_Shield, 393);
	ADD_TS_FLAG(BattlePvP_Mike_Bugle, 394);
	ADD_TS_FLAG(XenonAegisSystem, 395);
	ADD_TS_FLAG(AngelicBursterSoulSeeker, 396);
	ADD_TS_FLAG(HiddenPossession, 397);
	ADD_TS_FLAG(NightWalkerBat, 398);
	ADD_TS_FLAG(NightLordMark, 399);
	ADD_TS_FLAG(WizardIgnite, 400);
	ADD_TS_FLAG(FireBarrier, 401);
	ADD_TS_FLAG(ChangeFoxMan, 402);

	ADD_TS_FLAG(HayatoChangeMode, 407);
	ADD_TS_FLAG(HayatoCombo, 408);
	ADD_TS_FLAG(BeastModeChange, 426);
	ADD_TS_FLAG(BattlePvP_Helena_Mark, 431);
	ADD_TS_FLAG(BattlePvP_Helena_WindSpirit, 432);
	ADD_TS_FLAG(BattlePvP_LangE_Protection, 433);
	ADD_TS_FLAG(BattlePvP_LeeMalNyun_ScaleUp, 434);
	ADD_TS_FLAG(BattlePvP_Revive, 435);
	ADD_TS_FLAG(PinkbeanAttackBuff, 436);
	ADD_TS_FLAG(PinkbeanRelax, 437);
	ADD_TS_FLAG(PinkbeanRollingGrade, 438);
	ADD_TS_FLAG(PinkbeanYoYoStack, 439);
	ADD_TS_FLAG(RandAreaAttack, 440);
	ADD_TS_FLAG(NextAttackEnhance, 441);
	ADD_TS_FLAG(AranBeyonderDamAbsorb, 442);
	ADD_TS_FLAG(AranCombotempastOption, 443);
	ADD_TS_FLAG(NautilusFinalAttack, 444);
	ADD_TS_FLAG(ViperTimeLeap, 445);
	ADD_TS_FLAG(RoyalGuardState, 446);
	ADD_TS_FLAG(RoyalGuardPrepare, 447);
	ADD_TS_FLAG(MichaelSoulLink, 448);
	ADD_TS_FLAG(MichaelStanceLink, 449);
	ADD_TS_FLAG(TriflingWhimOnOff, 450);
	ADD_TS_FLAG(AddRangeOnOff, 451);
	ADD_TS_FLAG(KinesisPsychicPoint, 452);
	ADD_TS_FLAG(KinesisPsychicOver, 453);
	ADD_TS_FLAG(KinesisPsychicShield, 454);
	ADD_TS_FLAG(KinesisIncMastery, 455);
	ADD_TS_FLAG(KinesisPsychicEnergeShield, 456);
	ADD_TS_FLAG(BladeStance, 457);
	ADD_TS_FLAG(DebuffActiveSkillHPCon, 458);
	ADD_TS_FLAG(DebuffIncHP, 459);
	ADD_TS_FLAG(BowMasterMortalBlow, 460);
	ADD_TS_FLAG(AngelicBursterSoulResonance, 461);
	ADD_TS_FLAG(Fever, 462);
	ADD_TS_FLAG(IgnisRore, 463);
	ADD_TS_FLAG(RpSiksin, 464);
	ADD_TS_FLAG(BunnerBullet, 464);
	ADD_TS_FLAG(TeleportMasteryRange, 465);
	ADD_TS_FLAG(FixCoolTime, 466);
	ADD_TS_FLAG(IncMobRateDummy, 467);
	ADD_TS_FLAG(AdrenalinBoost, 468);
	ADD_TS_FLAG(AranSmashSwing, 469);
	ADD_TS_FLAG(AranDrain, 470);
	ADD_TS_FLAG(AranBoostEndHunt, 471);
	ADD_TS_FLAG(PreciseMissle, 461);
	ADD_TS_FLAG(HiddenHyperLinkMaximization, 472);
	ADD_TS_FLAG(RWCylinder, 473);
	ADD_TS_FLAG(RWCombination, 474);
	ADD_TS_FLAG(RWMagnumBlow, 475);
	ADD_TS_FLAG(RWBarrier, 476);
	ADD_TS_FLAG(RWBarrierHeal, 477);
	ADD_TS_FLAG(RWMaximizeCannon, 478);
	ADD_TS_FLAG(RWOverHeat, 479);
	ADD_TS_FLAG(UsingScouter, 480);
	ADD_TS_FLAG(RWMovingEvar, 481);
	ADD_TS_FLAG(Stigma, 482);

	ADD_TS_FLAG(EnergyCharged, 520);
	ADD_TS_FLAG(Dash_Speed, 521);
	ADD_TS_FLAG(Dash_Jump, 522);
	ADD_TS_FLAG(RideVehicle, 523);
	ADD_TS_FLAG(PartyBooster, 524);
	ADD_TS_FLAG(GuidedBullet, 525);
	ADD_TS_FLAG(Undead, 526);
	ADD_TS_FLAG(RideVehicleExpire, 527);
};

