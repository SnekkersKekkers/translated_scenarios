BGOpen("wf600",0);
BGMPlay("BGM_PLACE_BEACH",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040606102_06_000");
MsgDisp("Himuro","What is the sea to you?");
MsgSel("That's philosophical...","A place to have fun!","A hunting ground for love▼");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040606102_06_010");
    MsgDisp("Himuro","Don't think about it so hard...
Just answer casually?");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040606102_06_020");
    MsgDisp("Himuro","A safe answer.
...But, that's how it is for most people.");
    MsgDispSksp(1,7);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040606102_06_030");
        MsgDisp("Himuro","I have no obligation to go along with your
jokes.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040606102_06_040");
        MsgDisp("Himuro","What's with that?
Then, what am I to you?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606102_06_050");
        MsgDisp("Himuro","Should I keep watching you talk to the
guys around here?");
        MsgDisp("主人公","No, I was just making 
a joke just now....");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,1);
        VoicePlay("B040606102_06_060");
        MsgDisp("Himuro","I know that.
I know that, but I'm pissed.");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,0);
        VoicePlay("B040606102_06_070");
        MsgDisp("Himuro","The sea is a special place to me, And I'm
here with you now.");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,4);
        VoicePlay("B040606102_06_080");
        MsgDisp("Himuro","Not only that, I prefer the time I spend
with you over the time alone I've never
given away until now. And how much of
that——");
        ChEye(6,2);
        ChMouth(6,1);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040606102_06_090");
        MsgDisp("Himuro","......Haa.");
        MsgDisp("主人公","｛氷室＊＊｝?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606102_06_100");
        MsgDisp("Himuro","I didn't want to say something like that.
What am I saying, really?");
        MsgDisp("主人公","Umm, sorry I guess?
It's because you said something weird.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("B040606102_06_110");
        MsgDisp("Himuro","Right, it's your fault.
Reflect on it.");
        MsgDisp("主人公","Mmm......Sorry.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040606102_06_120");
        MsgDisp("Himuro","You can buy me soda and french fries as an
apology.
I was just starting to get hungry.");
        MsgDisp("主人公","Alright, I'll go buy them.");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,1);
        VoicePlay("B040606102_06_130");
        MsgDisp("Himuro","Don't go on your own, I'll go too.
I'll be troubled if guys around here
started hitting on you.");
        MsgDisp("主人公","They won't!");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040606102_06_140");
        MsgDisp("Himuro","I wonder about that.");
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
