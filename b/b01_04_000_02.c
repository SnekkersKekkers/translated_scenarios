BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I'm here a little early...
Hmm?)");
MsgDisp("主人公","｛七ツ森＊｝, you're early!");
BGMPlay("BGM_C04_NANA_A",0.01);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("B010400002_04_000");
    MsgDisp("Nanatsumori","You're early too.");
    MsgDispSksp(1,0);
    VoicePlay("B010400002_04_010");
    MsgDisp("Nanatsumori","Well then, let's go.
We can make use of this extra time.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,0,-1,-1,0,0,0,60);
    VoicePlay("B010400002_04_020");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Did you wake up early today?");
    MsgDispSksp(1,0);
    ChMouth(4,0);
    ChMotion(4,2);
    ChEyeOpenLevel(4,8);
    VoicePlay("B010400002_04_030");
    MsgDisp("Nanatsumori","Well. Thanks to you,
I hardly slept at all.
Don't even ask me why.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChNanaType(-1);
    ChOpen(4,253,0,0,4,-1,-1,0,0,0,60);
    VoicePlay("B010400002_04_040");
    MsgDisp("Nanatsumori","Yo.");
    MsgDisp("主人公","Aren't you here awfully early?
Don't tell me you didn't sleep-");
    MsgDispSksp(1,0);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3);
    VoicePlay("B010400002_04_050");
    MsgDisp("Nanatsumori","I didn't sleep.
Isn't it a little funny to act like a kid
who can't sleep because he's too excited?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
