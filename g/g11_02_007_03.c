SEPlay("EV_SE_DOOR_013");
BGOpen("sc608",0);
ScrFadeIn(0);
MsgDisp("主人公","(Managing club expenses is a pain......
Oh, I need to refill the first aid kit
too.)");
MsgClose();
SEPlay("EV_SE_FOOT_039");
SEWait();
BGMPlay("BGM_C02_SASSA_A");
ChOpen(2,41,0,2,2,0,#1,0,0);
MsgDisp("主人公","Ah?
｛颯砂＊＊｝.
Why are you here?");
ChEye(2,2);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G110200703_02_000");
MsgDisp("Sassa","I hit my knee whilst I was jumping
hurdles.");
MsgDisp("主人公","Are you okay?
I'll bring a bandaid now.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G110200703_02_010");
MsgDisp("Sassa","Oh, thank you.");
MsgDisp("主人公","(I need to refill the bandaids too......!)");
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev002",0);
BGMVol(0.5,2);
ChOpen(2,100,0,1,1,#1,#1,0,0);
SEPlay("EV_SE_FOOT_037");
ScrFadeIn(0);
VoicePlay("G110200703_02_020");
MsgDisp("Sassa","Maybe I should try jumping through hurdles
as a warmup......");
MsgDisp("主人公","Hurdles?");
ChEye(2,1);
ChMouth(2,1);
ChMotion(2,0);
VoicePlay("G110200703_02_030");
MsgDisp("Sassa","If I don't try to suffer through it and
improve I'll just keep breaking the
hurdles.");
MsgDisp("主人公","That......might be a problem?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200703_02_040");
MsgDisp("Sassa","Oh.
Right now, you were worried about the club
fees, not my health, right?");
MsgDisp("主人公","Hehe, can't it be both?");
ChEye(2,1);
ChMouth(2,0);
ChMotion(2,1);
VoicePlay("G110200703_02_050");
MsgDisp("Sassa","Hey, prioritize me, please.");
VoicePlay("G110200703_34_000");
MsgDisp("Member","Hey, you two over there. How long are you
going to be lovey dovey for? Let's go
ahead～?");
SEStop("EV_SE_FOOT_037",2);
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
SEWait();
BGOpen("sc601",1);
MsgClose();
ChOpen(2,41,5,5,0,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110200703_02_060");
MsgDisp("Sassa","Huh...... there's no one there......
Rather, what did they mean by lovey dovey?");
MsgDisp("主人公","Umm......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,2);
ChCheek(2,10);
VoicePlay("G110200703_02_070");
MsgDisp("Sassa","Oh, I'm going to go cool down.");
MsgClose();
BGMStop();
SEPlay("EV_SE_672");
MsgClose();
ChClose(2);
MsgDisp("主人公","(Was everyone watching?
I think I'm a bit embarrassed......)");
MsgClose();
ScrFadeOut(0,0);
