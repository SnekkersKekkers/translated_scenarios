BGOpen("sc623",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("H280600000_06_000");
    MsgDisp("Himuro","It's starting, huh.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
Did you come to cheer us on?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H280600000_06_010");
    MsgDisp("Himuro","Pretty much.
Just so it's clear, I came to cheer you
on, not to comfort you.");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("H280600000_06_020");
    MsgDisp("Himuro","I'll be expecting lots from the
team members that you've supported
up until now.");
    MsgDisp("主人公","......Yeah!");
    MsgDisp("主人公","(Alright, let's do our best......!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("H280600000_06_030");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Why are you here?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    ChEyeOpenLevel(6,0);
    VoicePlay("H280600000_06_040");
    MsgDisp("Himuro","That question is just nonsense.
Of course I'm here to support you.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("H280600000_06_050");
    MsgDisp("Himuro","You've entrusted your dreams
to the team, right?");
    MsgDisp("主人公","Ah...... yeah!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("H280600000_06_060");
    MsgDisp("Himuro","......That makes me a little jealous.");
    MsgDisp("主人公","Huh?");
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("H280600000_06_070");
    MsgDisp("Himuro","No?　Then make sure that you get
some results.
I'll be looking forward to it.");
    MsgDisp("主人公","(Alright, I'm going to do my best
to cheer too!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6);
