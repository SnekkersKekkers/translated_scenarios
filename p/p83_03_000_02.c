BGMStop();
BGOpen("sc605",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Yes, then I'll return this to you.
Be careful not to lose your belongings.");
    VoicePlay("P830300002_39_000");
    MsgDisp("Male Student","Thank you very much!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,4,4,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P830300002_03_000");
    MsgDisp("Honda","｛主人公｝, good work.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Are you enjoying the cultural festival?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("P830300002_03_010");
    MsgDisp("Honda","Seems like I lost something too.");
    MsgDisp("主人公","Eh, what did you lose?
Did you write your name on it?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("P830300002_03_020");
    MsgDisp("Honda","I didn't write my name on it...
Even though I was going to it eat with
you, I lost my meal ticket for takoyaki.");
    MsgDisp("主人公","Your name wouldn't be written on your meal
ticket, huh?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1,1);
    VoicePlay("P830300002_03_030");
    MsgDisp("Honda","Yeah, I'll look around for a bit.
I'll see you then.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("P830300002_03_040");
    MsgDisp("Honda","Ah, if I find it, shall we eat it
together?");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","(｛本多＊＊｝, thank you.
But, I don't know if you'll find your meal
ticket...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Yes, then I'll return this to you.
Be careful not to lose your belongings.");
    VoicePlay("P830300002_39_010");
    MsgDisp("Male Student","Thank you very much!");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(3,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(3);
    VoicePlay("P830300002_03_050");
    MsgDisp("Honda","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.
Yeah, is something the matter?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("P830300002_03_060");
    MsgDisp("Honda","A takoyaki meal ticket isn't really lost
property...");
    MsgDisp("主人公","Eh, did ｛本多＊＊｝ lose it?");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,2,1);
    VoicePlay("P830300002_03_070");
    MsgDisp("Honda","Haa, that's right.
It hasn't been turned in, right...");
    MsgDisp("主人公","I'll write this in the lost items
notebook.");
    ChEye(3,2);
    ChMouth(3,4);
    ChMotion(3,5,1);
    VoicePlay("P830300002_03_080");
    MsgDisp("Honda","Aaah, that's no good...");
    MsgDisp("主人公","Eh?");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    VoicePlay("P830300002_03_090");
    MsgDisp("Honda","Well, even if it was turned in, I have no
proof it's mine.");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("P830300002_03_100");
    MsgDisp("Honda","There's bound to be lots of people who've
lost their meal tickets.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("P830300002_03_110");
    MsgDisp("Honda","I'll go look for it.
Then, you too should also enjoy the
cultural festival properly.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(3);
    MsgDisp("主人公","(｛本多＊＊｝, thank you.
But, I don't know if you'll find your meal
ticket...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
