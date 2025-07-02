BGOpen("wf620",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040106302_01_000");
MsgDisp("Kazama","There's no one else out here, so you can
still clearly see our footprints.");
MsgSel("Look, the waves are washing them away!","Hehe, is that the past, and this is the future?","You have a pretty wide stride.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040106302_01_010");
        MsgDisp("Kazama","You really need to
learn to read the room better.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,7);
        VoicePlay("B040106302_01_020");
        MsgDisp("Kazama","If they wash away, we'll just make
new footprints.");
        ChEye(1,0);
        ChMouth(1,1);
        VoicePlay("B040106302_01_030");
        MsgDisp("Kazama","Look, once something has made it's impact,
it doesn't just disappear. Even if it's
invisible. So you can just redo it over
the old copy.");
        MsgDisp("主人公","Umm, ｛風真＊＊｝, what's wrong?");
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106302_01_040");
        MsgDisp("Kazama","However much of the past you might have
forgotten, it doesn't mean it didn't
happen.");
        MsgDisp("主人公","But I remember things well?");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040106302_01_050");
        MsgDisp("Kazama","Just in case it's ever forgotten.");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0,1);
        VoicePlay("B040106302_01_060");
        MsgDisp("Kazama","Even if you and I can't see our
footprints, they still remain under the
sand. You get it?");
        MsgDisp("主人公","Yeah...");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040106302_01_070");
        MsgDisp("Kazama","Alright, good.");
        MsgDisp("主人公","(｛風真＊＊｝, you must really cherish
the memories we have together, huh.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040106302_01_080");
    MsgDisp("Kazama","Oh, that's unlike you to say. Then we'll
leave more footprints in the future!");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("B040106302_01_090");
    MsgDisp("Kazama","Your stride is just too small. Something
about your tiny footprints feels like I'm
walking alongside a little dog, huh?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
