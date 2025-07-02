MsgClose();
BGOpen("sc351",0);
ChLayout(1);
BGMPlay("BGM_C07_MIKAGE_A");
ChOpen(7,254,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛御影＊＊｝,
please have this Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,5);
    VoicePlay("L040700000_07_000");
    MsgDisp("Mikage","Thanks.
I'll take it gratefully.");
    MsgDisp("主人公","Yay, you took it!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    ChEyeOpenLevel(7,8);
    VoicePlay("L040700000_07_010");
    MsgDisp("Mikage","If you're the one giving it to me,
there's no choice but to take it.");
    ChEyeOpenLevel(7,-1);
    break ;
    case 3:
    MsgDisp("主人公","｛御影＊＊｝,
will you take this
Valentine's chocolate?");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,0);
    VoicePlay("L040700000_07_030");
    MsgDisp("Mikage","The rule that says teacher's
can't accept, huh?");
    MsgDisp("主人公","Ah, is it really not allowed......?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    ChEyeOpenLevel(7,8);
    VoicePlay("L040700000_07_040");
    MsgDisp("Mikage","No, it's allowed.
I won't return it even if you ask, 'kay?");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛御影＊＊｝,
please have this Valentine's chocolate.");
    SEPlay("EV_SE_665");
    SEWait();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("L040700000_07_050");
    MsgDisp("Mikage","Oh, I've been waiting
for your chocolate～.");
    MsgDisp("主人公","Hehe, thanks for waiting.
But ｛御影＊＊｝, you already got a lot
from other girls in class, right?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("L040700000_07_060");
    MsgDisp("Mikage","It's not about how many. Everyone's
feelings make me happy, and it makes all
the difference if yours are there, too.");
    MsgDisp("主人公","｛御影＊＊｝……");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(7,-1);
