BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,#1,#1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600003_06_000");
    MsgDisp("Himuro","...Hey, did you get the price of that
bouquet wrong earlier?");
    MsgDisp("主人公","Um, 5 roses... 2 baby's breaths...
Ah, you're right!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I460600003_06_010");
    MsgDisp("Himuro","Get to the register now.
I'll be right behind you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,1);
    ChClose(6);
    MsgDisp("主人公","Y-Yeah!");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChOpen(6,35,2,0,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("I460600003_06_020");
    MsgDisp("Himuro","Thank god we managed.");
    MsgDisp("主人公","Sorry...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600003_06_030");
    MsgDisp("Himuro","To get the price of flowers wrong...
You're still just a beginner.");
    MsgDisp("主人公","Ugh...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600003_06_040");
    MsgDisp("Himuro","This isn't something that can be simply
forgiven just because you're not used to
this. Be more aware.");
    MsgDisp("主人公","Yes...");
    MsgDisp("主人公","(｛氷室＊＊｝ got mad at me...
I'll have to get it together...)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_655",0,0.8);
    Wait(60,0);
    MsgDisp("主人公","Hm?
Like this... no, if I do this...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("I460600003_06_050");
    MsgDisp("Himuro","...It's skewed.");
    SEStop("EV_SE_655",1);
    MsgDisp("主人公","Ugh...
I couldn't tie off the bouquet nicely
because it was too big...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600003_06_060");
    MsgDisp("Himuro","Honestly... haven't you done this with
the ribbons a million times now?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I460600003_06_070");
    MsgDisp("Himuro","Hand it over.
I'll do it this time.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600003_06_080");
    MsgDisp("Himuro","And after work, go practice tying big
bouquets.
... I'll stay, too.");
    MsgDisp("主人公","Huh, really...?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("I460600003_06_090");
    MsgDisp("Himuro","It'd just be annoying for me to be dragged
down by you.");
    MsgDisp("主人公","I guess so, thanks.");
    MsgDisp("主人公","(Let's try harder so we don't cause more
trouble...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
