BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H3A0400000_04_000");
    MsgDisp("Nanatsumori","You were cool.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
I won!");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H3A0400000_04_010");
    MsgDisp("Nanatsumori","I was watching.
Congrats!");
    MsgDisp("主人公","(I'm really glad
I stayed in the judo club!
Today's the best day ever!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H3A0400000_04_020");
    MsgDisp("Nanatsumori","｛主人公｝, good work.");
    MsgDisp("主人公","｛七ツ森＊｝!
I won, me!");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("H3A0400000_04_030");
    MsgDisp("Nanatsumori","I know. Well～......I guess if I ever make
you angry, you'll throw a punch like that
at me......");
    MsgDisp("主人公","Hm?
I, I wouldn't do something like that.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H3A0400000_04_040");
    MsgDisp("Nanatsumori","I was joking.
I don't mind you being powerful.
It was cool, you know?");
    MsgDisp("主人公","(Geez...... but, I'm really glad
I stayed in the judo club!
Today's the best day ever!)");
    BGMStop();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
