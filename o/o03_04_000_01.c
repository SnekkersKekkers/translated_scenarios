BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChNanaType(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030400001_04_000");
    MsgDisp("Nanatsumori","Well, guess that's it.");
    MsgDisp("主人公","(Hm.
We weren't really in sync...)");
    break ;
    case 3:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030400001_04_010");
    MsgDisp("Nanatsumori","You won't get first if you're with me.
Remember that next time.");
    MsgDisp("主人公","I thought that I would be in sync with
you, ｛七ツ森＊｝...
It was close.");
    ChEye(4,2);
    ChMouth(4,0);
    ChMotion(4,1,1);
    VoicePlay("O030400001_04_020");
    MsgDisp("Nanatsumori","Really?
I did try, but you can't count on me for
exercise.");
    MsgDisp("主人公","(Hm...
I guess that's it.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(0);
    ChOpen(4,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(4,1,1);
    VoicePlay("O030400001_04_030");
    MsgDisp("Nanatsumori","My bad.
You got pulled by my leg...");
    MsgDisp("主人公","No.
It's because I couldn't match you...");
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("O030400001_04_040");
    MsgDisp("Nanatsumori","Really...
You're a nice girl.");
    ChEye(4,2);
    ChMouth(4,4);
    VoicePlay("O030400001_04_050");
    MsgDisp("Nanatsumori","I wanted to win first together, though.");
    MsgDisp("主人公","Yeah.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,2,1);
    VoicePlay("O030400001_04_060");
    MsgDisp("Nanatsumori","I don't think I can win in exercise.
Sorry.");
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("O030400001_04_070");
    MsgDisp("Nanatsumori","I'll become a man you can rely on in other
areas.");
    MsgDisp("主人公","(｛七ツ森＊｝...
But, it really is a shame.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
