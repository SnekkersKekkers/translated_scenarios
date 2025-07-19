BGOpen("ex020",0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070200000_02_000");
    MsgDisp("Sassa","Yep, I like it.
It's super lively.");
    MsgDisp("主人公","Yep, so many people...");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4);
    VoicePlay("S070200000_02_010");
    MsgDisp("Sassa","Don't get separated.
Oh, when you look up, try to find my head
in the crowd.");
    MsgDisp("主人公","｛颯砂＊＊｝ is so tall, he's a landmark...");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("S070200000_02_020");
    MsgDisp("Sassa","Hey.
Well, it's convenient at a time like this.");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070200000_02_030");
    MsgDisp("Sassa","The air at the shrine is so clean, and it
feels good when it's so crowded.");
    MsgDisp("主人公","Yeah, it feels nice.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("S070200000_02_040");
    MsgDisp("Sassa","Okay, I'll try my best this year!");
    MsgDisp("主人公","｛颯砂＊＊｝ does his best every year
though...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("S070200000_02_050");
    MsgDisp("Sassa","Really?
I have to turn that hard work into hard
results.");
    MsgDisp("主人公","I want to support (｛颯砂＊＊｝ and his
challenges again this year!)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070200000_02_060");
    MsgDisp("Sassa","It's so crowded.
There's a lot of stands open.");
    MsgDisp("主人公","Yeah.
Everyone's having fun.");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("S070200000_02_070");
    MsgDisp("Sassa","I'm having more fun than everyone else,
though.");
    MsgDisp("主人公","Hehe, yeah.
Right, what kind of wish is ｛颯砂＊＊｝
going to make?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("S070200000_02_080");
    MsgDisp("Sassa","Hm, my wish...
That's a difficult one.");
    MsgDisp("主人公","Really?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("S070200000_02_090");
    MsgDisp("Sassa","My wish is something I work on myself.
It's not something to ask God for.");
    MsgDisp("主人公","...I see.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
