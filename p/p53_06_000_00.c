BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530600000_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    ChEyeOpenLevel(6,8);
    VoicePlay("P530600000_06_010");
    MsgDisp("Himuro","What's with that face.
Are you perhaps, stressed?");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P530600000_06_020");
    MsgDisp("Himuro","It's fine even if it's a failure.
It's not like your life is over.");
    MsgDisp("主人公","That might be true but...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600000_06_030");
    MsgDisp("Himuro","Asides from that, I think it would be a
shame if you were too stressed to enjoy
it.");
    MsgDisp("主人公","Ah...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600000_06_040");
    MsgDisp("Himuro","Well, that's only if you want 
to enjoy it.");
    MsgDisp("主人公","Yeah, that's right.
Thank you.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600000_06_050");
    MsgDisp("Himuro","Then, good luck.");
    MsgDisp("主人公","(Alright, let's enjoy it!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(It starts in just a little bit...
What should I do, I'm so nervous...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,2,0,0,0,#1,0,0);
    VoicePlay("P530600000_06_060");
    MsgDisp("Himuro","Just as I thought.");
    MsgDisp("主人公","Eh, ｛氷室＊＊｝? What are you doing here?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600000_06_070");
    MsgDisp("Himuro","Your face is pale.
Well, I thought as much.");
    MsgDisp("主人公","Ugh....");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600000_06_080");
    MsgDisp("Himuro","You're getting more nervous than
necessary. You're not performing on your
own, Why not take it easier?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P530600000_06_090");
    MsgDisp("Himuro","If you perform with that face, I'll also
feel uneasy.");
    MsgDisp("主人公","Yeah, that's right huh.
Thank you.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("P530600000_06_100");
    MsgDisp("Himuro","It's nothing.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Ah, it's time.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    ChCheek(6,0);
    VoicePlay("P530600000_06_110");
    MsgDisp("Himuro","Yeah. I'll listen from here. ...Do your
best.");
    MsgDisp("主人公","(｛氷室＊＊｝... Alright, good luck!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
