BGOpen("wf320",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603202_06_000");
MsgDisp("Himuro","The penguin is swimming leisurely whilst
swimming past several different couples, I
wonder how it feels...");
MsgSel("It doesn't seem interested.","It seems to be enjoying itself","It seems jealous.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,3);
    VoicePlay("B040603202_06_010");
    MsgDisp("Himuro","I like that penguin.
Seems like we could get along.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603202_06_020");
    MsgDisp("Himuro","Well definitely, it might be funny for it
if someone had a lover's quarrel.");
    MsgDispSksp(1,0);
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
        ChMotion(6,4);
        VoicePlay("B040603202_06_030");
        MsgDisp("Himuro","It's a great mistake to think everyone
would be jealous of the couples.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040603202_06_040");
        MsgDisp("Himuro","Why?
It's a penguin, so it doesn't matter
either way?");
        MsgDisp("主人公","But if I were a penguin, and
｛氷室＊＊｝ came here on a date
...");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,0);
        VoicePlay("B040603202_06_050");
        MsgDisp("Himuro","...Ha?");
        ChEye(6,0);
        ChMouth(6,1);
        ChMotion(6,1);
        VoicePlay("B040603202_06_060");
        MsgDisp("Himuro","Don't go off and imagine weird things on
your own?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0,1);
        VoicePlay("B040603202_06_070");
        MsgDisp("Himuro","Why would I have to come to a place like
this with someone other than you?");
        MsgDisp("主人公","No, I'm just talking in hypotheticals...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040603202_06_080");
        MsgDisp("Himuro","Then, Reiichi-san.");
        MsgDisp("主人公","Eh?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0,1);
        VoicePlay("B040603202_06_090");
        MsgDisp("Himuro","The person penguin you would see me with
is Reiichi-san.");
        MsgDisp("主人公","Reiichi-san...you mean vice president
Himuro?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,3);
        VoicePlay("B040603202_06_100");
        MsgDisp("Himuro","Right.
I was definitely dragged out for some
troublesome reason against my will.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040603202_06_110");
        MsgDisp("Himuro","Next time, envision my reluctant
expression too.");
        MsgDisp("主人公","(...Yeah, I can imagine that.)");
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
