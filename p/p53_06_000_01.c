BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I feel calmer than last year.
But as expected, I'm still anxious.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530600001_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600001_06_010");
    MsgDisp("Himuro","You're playing game music?
Maybe it's because it's a familiar piece,
there's a lot of customers.");
    MsgDisp("主人公","Ugh...
I'm anxious.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600001_06_020");
    MsgDisp("Himuro","Are you?
On the other hand, it's mostly people who
simply want to enjoy the music.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("P530600001_06_030");
    MsgDisp("Himuro","So, why not enjoy this time as much as
possible?");
    MsgDisp("主人公","...Yeah, that's right!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("P530600001_06_040");
    MsgDisp("Himuro","Then, I'll also go enjoy it.");
    MsgDisp("主人公","Thank you, ｛氷室＊＊｝.");
    MsgDisp("主人公","(Alright, let's have fun performing!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Seems like I feel calmer than last year.
But as expected, I'm still anxious.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P530600001_06_050");
    MsgDisp("Himuro","You're here.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
You came?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,1);
    VoicePlay("P530600001_06_060");
    MsgDisp("Himuro","Well yeah.
Seeing you anxious is funny.");
    MsgDisp("主人公","............");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600001_06_070");
    MsgDisp("Himuro","Eh, already?");
    MsgDisp("主人公","Yeah, the curtain is rising.");
    ChEye(6,2);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("P530600001_06_080");
    MsgDisp("Himuro","What...
I should have come earlier.");
    MsgDisp("主人公","Eh?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P530600001_06_090");
    MsgDisp("Himuro","No, it's nothing.
I look forward to your performance.");
    MsgDisp("主人公","Thank you!");
    MsgDisp("主人公","(Alright, let's give it our all!)");
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
