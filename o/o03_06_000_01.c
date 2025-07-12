BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600001_06_000");
    MsgDisp("Himuro","Well, this is a pretty safe result.");
    MsgDisp("主人公","(Hm, if we were just a little more in
sync......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600001_06_010");
    MsgDisp("Himuro","No helping it.
We weren't in sync.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("O030600001_06_020");
    MsgDisp("Himuro","I learned a lot.");
    MsgDisp("主人公","(Hm, if we were just a little more in
sync......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,2,0,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030600001_06_030");
    MsgDisp("Himuro","We couldn't get first place......");
    MsgDisp("主人公","Sorry.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030600001_06_040");
    MsgDisp("Himuro","No, it's not your fault.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("O030600001_06_050");
    MsgDisp("Himuro","I'm not good at matching others,
so it feels like this
targeted my weakness.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("O030600001_06_060");
    MsgDisp("Himuro","I learned a lot.
Thanks to you.");
    MsgDisp("主人公","(Hm, if we were just a little more in
sync......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
