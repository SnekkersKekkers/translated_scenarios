BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040508402_05_000");
MsgDisp("Hiiragi","The red leaves look nice on 
the blue water's surface doesn't it?");
MsgSel("It really touches your heart doesn't it?","Yeah, instagrammable, instagrammable.","It makes you feel calm");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040508402_05_010");
    MsgDisp("Hiiragi","Yes, totally.
That's a nice expression.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,2);
        VoicePlay("B040508402_05_020");
        MsgDisp("Hiiragi","\"Instagrammable, instagrammable?\"
Instagrammable?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChMotion(5,4);
        VoicePlay("B040508402_05_030");
        MsgDisp("Hiiragi","I hear that word from time to time, so
it's used in these sorts of situations.");
        MsgDisp("主人公","That's right.
When you see beautiful things, when you 
see cute things, It's a feeling you
get when you want to take a picture.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040508402_05_040");
        MsgDisp("Hiiragi","Is that so, 
I shall use it too from now on.");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(5,2);
        ChMotion(5,4);
        ChEyeOpenLevel(5,9);
        VoicePlay("B040508402_05_050");
        MsgDisp("Hiiragi","...Why are you laughing?
Is it weird for me to 
use \"instagrammable\"?");
        MsgDisp("主人公","It's not weird.
Maybe just a bit cute.");
        ChEye(5,3);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040508402_05_060");
        MsgDisp("Hiiragi","Your smile just now 
was \"instagrammable\".");
        MsgDisp("主人公","Ehh?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040508402_05_070");
        MsgDisp("Hiiragi","Huh, did I use it wrong?
It was because it was a 
beautiful and cute smile.");
        MsgDisp("主人公","(Umm, I'm happy but... I wonder if that's
the right way to use it...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040508402_05_080");
    MsgDisp("Hiiragi","I'm calm.
This place continues to be a 
powerspot even in autumn.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
