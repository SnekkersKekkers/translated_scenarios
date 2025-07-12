BGOpen("sc740",0);
BGMStop();
ScrFadeIn(0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,3,#1,#1,0,0,0,60);
    VoicePlay("P530400002_04_000");
    MsgDisp("Nanatsumori","How cool～");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Did you come to listen?");
    ChMotion(4,1,1);
    VoicePlay("P530400002_04_010");
    MsgDisp("Nanatsumori","Well, yes.
This is a culmination of all 
your hard work, you know?");
    MsgDisp("主人公","Yeah.");
    ChMotion(4,0,1);
    VoicePlay("P530400002_04_020");
    MsgDisp("Nanatsumori","That's a nice face.
You look like a pro.");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Then, I'm off!");
    VoicePlay("P530400002_04_030");
    MsgDisp("Nanatsumori","Yes. I'll be paying attention from the
audience.");
MsgDisp("主人公","(Though it's embarrassing to be the centre
of attention...This is a culmination of
the last three years of work. So that I
don't regret it, I'll give it my all!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Seems like I'm calm this year.
Maybe it's because I've been giving
it my all these last three years?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChLayout(1);
    ChNanaType(0);
    ChOpen(4,254,0,0,0,#1,#1,0,0,0,60);
    VoiceEVSPlay(4);
    VoicePlay("P530400002_04_040");
    MsgDisp("Nanatsumori","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛七ツ森＊｝!
Did you come to listen?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("P530400002_04_050");
    MsgDisp("Nanatsumori","Did you really think I wouldn't come?");
    MsgDisp("主人公","No.
I thought you'd come.");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400002_04_060");
    MsgDisp("Nanatsumori","...Yeah.
Seems like this will be your
best performance yet. ");
    MsgDisp("主人公","Yes.
I'll give it my all, yeah?");
    ChEye(4,4);
    ChMouth(4,4);
    ChCheek(4,5);
    VoicePlay("P530400002_04_070");
    MsgDisp("Nanatsumori","Y-Yeah.");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,2,1);
    VoicePlay("P530400002_04_080");
    MsgDisp("Nanatsumori","...Crap.
Why am I the one who's heart is racing?");
    MsgDisp("主人公","?");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Then, I'm off!");
    ChEye(4,3);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("P530400002_04_090");
    MsgDisp("Nanatsumori","Have fun.
I'll be watching over from the audience.");
    MsgDisp("主人公","(｛七ツ森＊｝ is cheering me on. Alright,
using the culmination of my three 
years of hard work, let's perform so
that I don't regret it!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
