BGOpen("sc740",0);
BGMStop();
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Maybe it's because gaming music is
popular...
There are a lot of customers...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P530300001_03_000");
    MsgDisp("Honda","｛主人公｝.
Pardon the intrusion!
I came for a tour.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
... Enjoy yourself.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("P530300001_03_010");
    MsgDisp("Honda","Huh?
You don't look like you're having much fun
though.");
    MsgDisp("主人公","Ah, I'm just a little anxious...");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P530300001_03_020");
    MsgDisp("Honda","Why?
Everyone likes gaming music, and it's also
fun.");
    ChMotion(3,2,1);
    VoicePlay("P530300001_03_030");
    MsgDisp("Honda","As the one performing, you have to enjoy
it the most.");
    MsgDisp("主人公","Y-Yeah.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("P530300001_03_040");
    MsgDisp("Honda","Don't make that 'this is impossible' face!");
    MsgDisp("主人公","Hehe, I'm not making that kind of face!");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P530300001_03_050");
    MsgDisp("Honda","Then, 'game start', right?");
    MsgDisp("主人公","Yeah!");
    MsgDisp("主人公","(Thanks to ｛本多＊＊｝, it seems
a bit easier. Alright, then I'll also
enjoy my performance!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Maybe it's because gaming music is
popular...
There are a lot of customers...)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,3,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P530300001_03_060");
    MsgDisp("Honda","｛主人公｝.
I came to listen to some gaming music.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝...");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    VoicePlay("P530300001_03_070");
    MsgDisp("Honda","Huh, that face are you tense?");
    MsgDisp("主人公","Y-Yeah, a bit.
I'm just thinking about if I mess up...");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P530300001_03_080");
    MsgDisp("Honda","Heheh, did you know?
You often hear about game cheats, right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P530300001_03_090");
    MsgDisp("Honda","It seems like there are many cases where
they're just mistakes made during
development");
    MsgDisp("主人公","Ehhh, is that so?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P530300001_03_100");
    MsgDisp("Honda","BUt players enjoy them.
It makes the game more interesting.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P530300001_03_110");
    MsgDisp("Honda","So, even if you mess up the performance,
as long as everyone enjoys it in the end,
isn't that good?");
    MsgDisp("主人公","Hmmm.
I guess so...");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    SEPlay("EV_SE_038");
    SEWait();
    VoicePlay("P530300001_03_120");
    MsgDisp("Honda","Ah, it's start time.
Come on, let's all enjoy the game
together.");
    MsgDisp("主人公","(Yeah, since I'm performing game music, we
should have fun with it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
