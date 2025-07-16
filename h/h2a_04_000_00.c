BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H2A0400000_04_000");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
We won!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H2A0400000_04_010");
    MsgDisp("Nanatsumori","Yeah, the team did, right?
Well, I guess you were their manager.
Good work.");
    MsgDisp("主人公","(Hehe!
I'm glad that I stayed as the track and
field club manager!)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H2A0400000_04_020");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
We w-");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H2A0400000_04_030");
    MsgDisp("Nanatsumori","I know.
That's why I came.");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H2A0400000_04_040");
    MsgDisp("Nanatsumori","Congrats on winning.
You guys are amazing.
The team, and you as the manager.");
    MsgDisp("主人公","Thanks......");
    ChEye(4,2);
    ChMouth(4,1);
    ChMotion(4,2,1);
    VoicePlay("H2A0400000_04_050");
    MsgDisp("Nanatsumori","But......
I never thought I would be so moved just
by sports.");
    MsgDisp("主人公","Hehe!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("H2A0400000_04_060");
    MsgDisp("Nanatsumori","Nice smile.
Really, good work.");
    MsgDisp("主人公","(I'm glad that I stayed as the track and
field club manager......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
