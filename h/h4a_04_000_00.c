BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(4,6)){
    case 3:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("H4A0400000_04_000");
    MsgDisp("Nanatsumori","Amazing......
I got goosebumps.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!");
    ChMotion(4,1,1);
    VoicePlay("H4A0400000_04_010");
    MsgDisp("Nanatsumori","And your technique.
It felt like I was seeing a fairy do magic
in real life.");
    MsgDisp("主人公","Hehe.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("H4A0400000_04_020");
    MsgDisp("Nanatsumori","You really let me see something good.
Congrats on winning!");
    MsgDisp("主人公","(I'm glad I stayed in the rhythmic
gymnastics club......
Today's the best day ever!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    BGMPlay("BGM_C04_NANA_A",0.01);
    ChNanaType(0);
    ChOpen(4,254,0,4,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(4);
    VoicePlay("H4A0400000_04_030");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝! I won!");
    VoicePlay("H4A0400000_04_040");
    MsgDisp("Nanatsumori","Oh no......");
    MsgDisp("主人公","Hm?");
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,1,1);
    VoicePlay("H4A0400000_04_050");
    MsgDisp("Nanatsumori","Ever since the match ended, that sparkling
thing you were doing has been burned into
my eyes......");
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("H4A0400000_04_060");
    MsgDisp("Nanatsumori","Even now, it's dazzling......
It makes me almost lose my rationality.");
    MsgDisp("主人公","Geez, you're making me feel shy......");
    ChEye(4,1);
    ChMouth(4,2);
    ChMotion(4,2,1);
    ChEyeOpenLevel(4,0);
    ChCheek(4,5);
    VoicePlay("H4A0400000_04_070");
    MsgDisp("Nanatsumori","Ugh......! If you look at me like that,
I'll......");
    MsgDisp("主人公","(｛七ツ森＊｝...... I'm glad I stayed
in the rhythmic gymnastics club......
Today's the best day ever!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
