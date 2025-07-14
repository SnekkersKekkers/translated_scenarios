BGOpen("fp410",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040310102_03_000");
MsgDisp("Honda","Which exhibition did you like best?");
MsgSel("MAybe the dinosaur fossils","Maybe the seasonal special exhibit","...I don't really know.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChMouth(3,0);
    ChMotion(3,0);
    ChMotion(3,4);
    VoicePlay("B040310102_03_010");
    MsgDisp("Honda","Yep yep, The permanent dinosaur exhibit
here is also well done.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(4);
    ChEye(3,3);
    ChEye(3,3);
    ChMotion(3,5);
    VoicePlay("B040310102_03_020");
    MsgDisp("Honda","I get it! Even in the permanent
exhibitions you can see appearance changes
matching the the season, as expected of
Habataki City!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,0,1);
        ChEyeOpenLevel(3,8);
        VoicePlay("B040310102_03_030");
        MsgDisp("Honda","You don't know?
Even though it's your personal opinion?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,2);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040310102_03_040");
        MsgDisp("Honda","You don't know, huh...
I'll tell you everything that I know.");
        MsgDisp("主人公","Sorry, that was a weird way to put it.
I enjoyed the museum though, my favourite
thing was...");
        ChEye(3,1);
        ChMouth(3,1);
        ChMotion(3,5);
        VoicePlay("B040310102_03_050");
        MsgDisp("Honda","Ahー, this won't do!");
        MsgDisp("主人公","W-What's wrong?");
        ChEye(3,2);
        ChMouth(3,2);
        ChMotion(3,2);
        VoicePlay("B040310102_03_060");
        MsgDisp("Honda","This is because I totally failed at
conveying the appeal of the permanent
exhibits to you, right?");
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040310102_03_070");
        MsgDisp("Honda","There's always so much I want to talk
about that my explanations for one thing
end up shallowー This is truly my fault.");
        MsgDisp("主人公","Eh, I never thought they were shallow——");
        ChEye(3,1);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040310102_03_080");
        MsgDisp("Honda","Today, let's take our time going through
each one in order and exhausting
everything I have to say. Okay, since it's
been decided... Let's go!");
        MsgDisp("主人公","(Ehh! Right nowー∋)");
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
