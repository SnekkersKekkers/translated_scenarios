BGOpen("fp200",0);
ChEye(5,0);
ChMouth(5,0);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
ChEye(5,3);
ChMouth(5,4);
VoicePlay("B040508502_05_000");
MsgDisp("Hiiragi","Haaー. We came on such a cold day didn't
we?");
MsgSel("It's cold because you think it's cold!","Haaー,Haaー, my breath is really pure white!","Shall we hold hands?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("B040508502_05_010");
    MsgDisp("Hiiragi","Phew, what's wrong?
The cold has gotten you strangely tense.");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMotion(5,4);
        VoicePlay("B040508502_05_020");
        MsgDisp("Hiiragi","Hey hey, if you do that you'll run out of
breath.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        VoicePlay("B040508502_05_030");
        MsgDisp("Hiiragi","Hey hey, 
you'll run out of breath.");
        MsgDisp("主人公","Yes.");
        ChEye(5,0);
        ChMouth(5,2);
        VoicePlay("B040508502_05_040");
        MsgDisp("Hiiragi","Hm...?");
        MsgDisp("主人公","What's wrong?");
        ChEye(5,4);
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040508502_05_050");
        MsgDisp("Hiiragi","No, my heart just skipped a beat at your
breath becoming visible.");
        MsgDisp("主人公","Ehhh∋");
        ChEye(5,3);
        ChMouth(5,2);
        ChMotion(5,0);
        VoicePlay("B040508502_05_060");
        MsgDisp("Hiiragi","Is it really that surprising of a matter?");
        MsgDisp("主人公","Well, for some reason it's super
embarrassing.");
        ChEye(5,4);
        ChMouth(5,4);
        VoicePlay("B040508502_05_070");
        MsgDisp("Hiiragi","I apologize for that.
But, I was super happy being surrounded by
your breath.");
        MsgDisp("主人公","Hey!");
        ChEye(5,3);
        ChMotion(5,4);
        VoicePlay("B040508502_05_080");
        MsgDisp("Hiiragi","Ah, please excuse me.
Winter is a wonderful thing, isn't it?");
        MsgDisp("主人公","(Hey, ｛柊＊＊＊｝, You say weird things
from time to time don't you...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,3);
    VoicePlay("B040508502_05_090");
    MsgDisp("Hiiragi","Sounds good.
How about we hold hands and walk around
the spring several times?");
    MsgDispSksp(1,8);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
