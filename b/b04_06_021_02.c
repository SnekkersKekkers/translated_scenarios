BGOpen("wf210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040602102_06_000");
MsgDisp("Himuro","This place has a nice atmosphere.
Like I can experience something 
outside of the ordinary.");
MsgSel("Is it a nice atmosphere the same as it being unusual?","Once in a while, I want to forget about my everyday life.","Maybe it depends on who you're with");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040602102_06_010");
    MsgDisp("Himuro","They're definitely not the same.
Forget what I just said.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602102_06_020");
        MsgDisp("Himuro","It's not like I'm disatisfied
with my everyday life though?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040602102_06_030");
        MsgDisp("Himuro","I see...
Escapism is nonsense, but times
like this are necessary too.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602102_06_040");
        MsgDisp("Himuro","Even so, once in a while you'll 
make me say something that
makes me take a step back.");
        MsgDisp("主人公","Is that so?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602102_06_050");
        MsgDisp("Himuro","Normally, that's how 
it always feels though.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602102_06_060");
        MsgDisp("Himuro","... I also want to get 
some form of payback.");
        MsgDisp("主人公","Ehh.
Payback...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040602102_06_070");
        MsgDisp("Himuro","Stuff like being able to see through your
thoughts, saying things that hit the nail
on the head, catching you off guard.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040602102_06_080");
        MsgDisp("Himuro","...Haa, I feel like I
can't do that at all.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040602102_06_090");
        MsgDisp("Himuro","If I could see through your thoughts,
I wouldn't be that troubled
in the first place. ");
        MsgDisp("主人公","｛氷室＊＊｝, you're feeling trohbled?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040602102_06_100");
        MsgDisp("Himuro","Yeah, thanks to you,");
        MsgDisp("主人公","(I-it's my fault?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040602102_06_110");
    MsgDisp("Himuro","Yeah, that might be important.
The one by my side is you after all.
I wouldn't feel this way with anyone else.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
