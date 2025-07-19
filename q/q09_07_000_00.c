BGOpen("sc810",0);
MsgClose();
SEPlay("EV_SE_544");
ChOpen(7,254,0,0,0,#1,#1,0,0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    VoicePlay("Q090700000_07_000");
    MsgDisp("Mikage","Good morning, how you look excited.");
    MsgDisp("主人公","Yes.
Extracurricular lessons Nagasaki edition,
I'm looking forward.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("Q090700000_07_010");
    MsgDisp("Mikage","Oh, I'll have some fun with you, huh?");
    MsgDisp("主人公","Hehe!
Yes.");
    break ;
    case 3:
    VoicePlay("Q090700000_07_020");
    MsgDisp("Mikage","Good morning!
Looks like you slept well.");
    MsgDisp("主人公","Yes.
And you, ｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("Q090700000_07_030");
    MsgDisp("Mikage","Sure, I'm ready.
We're all set.
Let's go then.");
    MsgDisp("主人公","Yes!");
    break ;
    case 4:
    case 5:
    VoicePlay("Q090700000_07_040");
    MsgDisp("Mikage","Good morning!");
    MsgDisp("主人公","Good morning, ｛御影＊＊｝.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("Q090700000_07_050");
    MsgDisp("Mikage","Looks like you slept well.");
    MsgDisp("主人公","Yes.
But I woke up early because I was looking
forward to it.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,2);
    VoicePlay("Q090700000_07_060");
    MsgDisp("Mikage","Is that so.
Now I'll have to live up to that
expectation.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("Q090700000_07_070");
    MsgDisp("Mikage","extracurricular lesson Nagasaki version,
the last day has begun!");
    MsgDisp("主人公","Yes!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
