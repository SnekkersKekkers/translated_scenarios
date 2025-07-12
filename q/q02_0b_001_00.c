BGOpen("sc810",0);
ChLayout(2);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("Q020B00100_01_000");
MsgDisp("Kazama?","｛主人公｝,
Good morning.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(1,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(3,254,0,0,0,#1,#1,0,1,0,30);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,2,0,30);
MsgDisp("主人公","Ah.
Good morning,everyone!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q020B00100_03_000");
MsgDisp("Honda","Good morning! Hey, let's go together for
the free period!");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q020B00100_04_000");
MsgDisp("Nanatsumori","If you're okay with us.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
VoicePlay("Q020B00100_01_010");
MsgDisp("Kazama","You're coming, right?");
MsgSel("Yes, I'm coming！","Sorry, it's just……");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(4,0);
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("Q020B00100_01_020");
    MsgDisp("Kazama","Alright.");
    ChEye(1,0);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("Q020B00100_03_010");
    MsgDisp("Honda","Yey!
This will get fun.");
    ChEye(4,1);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q020B00100_04_010");
    MsgDisp("Nanatsumori","Heh.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0,1);
    VoicePlay("Q020B00100_01_030");
    MsgDisp("Kazama","Well then, let's get going. There are a
lot of people here, so we need to plan
ahead.");
    MsgDisp("主人公","Yeah!");
    break ;
    case 1:
    ChEye(3,0);
    ChMouth(3,4);
    ChEye(4,2);
    ChMouth(4,0);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("Q020B00100_01_040");
    MsgDisp("Kazama","I see......
You can't.");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("Q020B00100_04_020");
    MsgDisp("Nanatsumori","Give it up, Kazama.");
    ChEyeOpenLevel(1,0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("Q020B00100_03_020");
    MsgDisp("Honda","That's right. I'm sure she must've
promised to go with somebody else already.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0,1);
    VoicePlay("Q020B00100_01_050");
    MsgDisp("Kazama","It can't be helped. You've got to be
careful going there, though.");
    ChEye(4,2);
    ChMouth(4,2);
    ChMotion(4,2,1);
    VoicePlay("Q020B00100_04_030");
    MsgDisp("Nanatsumori","With three guys, huh......
I guess it can't be helped.");
    ChMouth(1,0);
    ChEyeOpenLevel(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("Q020B00100_03_030");
    MsgDisp("Honda","Well then, off we go!
I hope you enjoy the free period too!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_MANY");
    ChClose(3,0,30);
    ChClose(1,0,30);
    ChClose(4,0,30);
    MsgDisp("主人公","(They even invited me,
I feel bad......)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
ChClose(1,0,0);
ChClose(4,0,0);
