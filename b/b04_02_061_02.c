BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3,1);
ScrFadeIn(0);
VoicePlay("B040206102_02_000");
MsgDisp("Sassa","I always get excited when I see those
watermelon beach balls.");
MsgSel("It's perfect for the beach","Makes me want to watermelon","The orca floaty would be good");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("B040206102_02_010");
    MsgDisp("Sassa","Yeah, you only get to see it here.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B040206102_02_020");
    MsgDisp("Sassa","I definitely want to eat some.
Maybe that's the beach club's strategy?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040206102_02_030");
        MsgDisp("Sassa","I understand wanting to ride a dolphin.
But in what situation would you want to
ride a killer whale?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040206102_02_040");
        MsgDisp("Sassa","Are you really going to ride that......");
        MsgDisp("主人公","Eh?
N-No?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040206102_02_050");
        MsgDisp("Sassa","I'm not saying no.
But you know, me floating in the ocean all
by myself, straddling that thing...");
        MsgDisp("主人公","Hehe, that would be cute, though?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040206102_02_060");
        MsgDisp("Sassa","Cute?
What's with that?");
        MsgDisp("主人公","I think it would be fun if we rode one
together.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,4);
        ChCheek(2,10);
        VoicePlay("B040206102_02_070");
        MsgDisp("Sassa","Me...with you?");
        MsgDisp("主人公","Yeah.
It's hard to stay afloat with two people
on top.");
        ChEye(2,0);
        ChMouth(2,2);
        ChMotion(2,2);
        VoicePlay("B040206102_02_080");
        MsgDisp("Sassa","...... Woah, the orca actually has hidden
potential.
I didn't think of that......");
        MsgDisp("主人公","Uhm......?
If ｛颯砂＊＊｝ doesn't want
to......");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,5);
        VoicePlay("B040206102_02_090");
        MsgDisp("Sassa","Let's go!
Hurry!
Before they run out of rentals.");
        MsgClose();
        SEPlay("EV_SE_580");
        ChClose(2);
        SEWait();
        MsgDisp("主人公","(Huh?
What's up with ｛颯砂＊＊｝? )");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
