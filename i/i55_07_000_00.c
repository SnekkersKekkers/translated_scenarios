BGOpen("ar500",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    SEPlay("EV_SE_544");
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550700000_07_000");
    MsgDisp("Mikage","Excuse me.");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I550700000_07_010");
    MsgDisp("Mikage","I was wondering if you were here.");
    MsgDisp("主人公","How can I help?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I550700000_07_020");
    MsgDisp("Mikage","Nah, I just came to see you.
My part-time visits.");
    MsgDisp("主人公","Part-time visits?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,4);
    VoicePlay("I550700000_07_030");
    MsgDisp("Mikage","Princess Tsubaki, Habataki Books,
Simon...... Everyone works part-time in so
many different places.");
    MsgDisp("主人公","So you're going around visiting
everyone?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I550700000_07_040");
    MsgDisp("Mikage","Right, and so the part-time visits.
See you, good luck.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    VoicePlay("I550700000_07_050");
    MsgDisp("Mikage","Next is......");
    MsgDisp("主人公","(I guess he really was just coming to
check on me......)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 3:
    MsgClose();
    SEPlay("EV_SE_544");
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550700000_07_060");
    MsgDisp("Mikage","Excuse me.");
    MsgDisp("主人公","Yes! Ah, ｛御影＊＊｝. Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I550700000_07_070");
    MsgDisp("Mikage","Oh, you're working today too?");
    MsgDisp("主人公","Yes! Are you looking for something in
particular?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I550700000_07_080");
    MsgDisp("Mikage","Some Japanese sweets that would be good as
a gift, please.");
    MsgDisp("主人公","Then, how is this?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("I550700000_07_090");
    MsgDisp("Mikage","......I'll take an extra box.");
    MsgDisp("主人公","Understood. ......You're getting a lot,
huh.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("I550700000_07_100");
    MsgDisp("Mikage","I was thinking of handing them out during
tea time in the staff room.
You know, to keep everyone in a good mood.");
    MsgDisp("主人公","(｛御影＊＊｝...... did you do
something wrong again?)");
    MsgClose();
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(7);
    break ;
    case 4:
    case 5:
    MsgClose();
    SEPlay("EV_SE_544");
    BGMPlay("BGM_C07_MIKAGE_A",0.01);
    ChOpen(7,255,0,0,0,#1,#1,0,0);
    VoicePlay("I550700000_07_110");
    MsgDisp("Mikage","Yo, working hard?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝. Welcome!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("I550700000_07_120");
    MsgDisp("Mikage","I'll get today's recommended Japanese
sweets.");
    MsgDisp("主人公","Yes! Then, how about the daifuku with a
seasonal fruit filling?");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,2);
    VoicePlay("I550700000_07_130");
    MsgDisp("Mikage","Hm, do you have anything with a longer
shelf life?");
    MsgDisp("主人公","Then...... how about this assortment of
yokan? It's fun trying all the different
flavors.");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,0);
    VoicePlay("I550700000_07_140");
    MsgDisp("Mikage","Have you ever had these?");
    MsgDisp("主人公","Not all of them, but I was able to try a
few of them.
They were delicious.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0,1);
    VoicePlay("I550700000_07_150");
    MsgDisp("Mikage","Then I'll have those.");
    MsgDisp("主人公","Yes.
......
It'll be this much.");
    SEPlay("EV_SE_535",0,0.6);
    SEWait();
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("I550700000_07_160");
    MsgDisp("Mikage","That's a lot.");
    MsgDisp("主人公","Yes, it will last for a while, so please
enjoy them slowly.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("I550700000_07_170");
    MsgDisp("Mikage","Got it.
Then, you help me out too.");
    MsgDisp("主人公","Hm?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("I550700000_07_180");
    MsgDisp("Mikage","Let's have a little Princess Tsubaki party
in the science prep room, yeah?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    ChClose(7);
    MsgDisp("主人公","(I did it!
So we'll have them in the science prep
room∈)");
    BGMStop();
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
