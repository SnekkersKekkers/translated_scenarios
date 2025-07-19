BGMStop();
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoicePlay("P730400000_04_000");
    MsgDisp("Nanatsumori","Ah, I see a person stressing.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
I'm nervous...");
    VoicePlay("P730400000_04_010");
    MsgDisp("Nanatsumori","I could guess.");
    MsgDisp("主人公","Ehー....");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P730400000_04_020");
    MsgDisp("Nanatsumori","If I'm being truthful, when I do my
modelling work I'm always nervous.");
    MsgDisp("主人公","Eh, ｛七ツ森＊｝ too∋
I see...");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P730400000_04_030");
    MsgDisp("Nanatsumori","Right.
So, I understand your feelings very well.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,3);
    ChMouth(4,3);
    VoicePlay("P730400000_04_040");
    MsgDisp("Nanatsumori","That clothing seriously suits you, so have
confidence.");
    MsgDisp("主人公","Yeah.
Thank you!");
    MsgDisp("主人公","(Alーright, in order for me to look
wonderful too, I'll do my best!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("P730400000_04_050");
    MsgDisp("Nanatsumori","｛主人公｝.
This you make those clothes?");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Yeah, that's right but...");
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("P730400000_04_060");
    MsgDisp("Nanatsumori","You're nervous?");
    MsgDisp("主人公","A bit.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P730400000_04_070");
    MsgDisp("Nanatsumori","Have confidence.
Seriously, you're the cutest.");
    MsgDisp("主人公","Eh...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("P730400000_04_080");
    MsgDisp("Nanatsumori","ＧＯ!
Show your cool side.");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Maybe when ｛七ツ森＊｝ cheers me on,
I gain courage.
Alーright, let's do it!)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
