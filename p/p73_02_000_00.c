BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P730200000_02_000");
    MsgDisp("Sassa","｛主人公｝, how are the
preparations?
I came to see your model debut.");
    MsgDisp("主人公","Thank you.
I'm nervous to walk a runway wearing the
clothes I made.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P730200000_02_010");
    MsgDisp("Sassa","So you're both a model and designer huh...
You're amazing, huh?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200000_02_020");
    MsgDisp("Sassa","Then, I'll be cheering you on from the
front.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P730200000_02_030");
    MsgDisp("Sassa","... How should I cheer you on? \"
Do your best!\" is a bit weird...");
    MsgDisp("主人公","Hehe, it's not a sport, so just clapping
is fine?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P730200000_02_040");
    MsgDisp("Sassa","I see, got it!");
    SEPlay("EV_SE_038");
    SEWait();
    MsgDisp("主人公","Then, I'm off!");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P730200000_02_050");
    MsgDisp("Sassa","Oh, do your best!
No, I should be giving you a round of
applause.");
    MsgDisp("主人公","(Hehe!
For the sake of ｛颯砂＊＊｝ too,
let's do our best!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc740",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I finished just in time but, it's finally
the runway...
I'm nervous..)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,4,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P730200000_02_060");
    MsgDisp("Sassa","｛主人公｝.
How are the preparations or the fashion
show?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200000_02_070");
    MsgDisp("Sassa","You look a little nervous?");
    MsgDisp("主人公","Y-Yeah.
I'm experienced with making clothes but...
I'm nervous to go up on stage.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("P730200000_02_080");
    MsgDisp("Sassa","I see, so it's like that.
It's not a modelling club after all.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("P730200000_02_090");
    MsgDisp("Sassa","But the clothes that you made, fit you the
most. It's way better than having someone
else model them.");
    MsgDisp("主人公","｛颯砂＊＊｝...");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,1);
    VoicePlay("P730200000_02_100");
    MsgDisp("Sassa","So, go with confidence.");
    MsgDisp("主人公","Yeah, thank you!");
    MsgDisp("主人公","(｛颯砂＊＊｝ gave me courage, I have to
make this a success!)");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGOpen("sc725",0);
ScrFadeIn(0);
