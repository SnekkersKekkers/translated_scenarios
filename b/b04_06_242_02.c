BGOpen("tr520",0);
ChLayout(1);
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624202_06_000");
MsgDisp("Himuro","Ugh... the rice in the pot is burnt...");
MsgSel("You clumsy thing","Burnt rice is delicious too","This is the true thrill of camping.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:

        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040624202_06_010");
        MsgDisp("Himuro","I like my rice hard.
And what's with the \" clumsy thing\"?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,2);
        ChMouth(6,0);
        ChMotion(6,2);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040624202_06_020");
        MsgDisp("Himuro","...I'm angry I can't 
even completely deny it.");
        MsgDisp("主人公","Sorry, it was just a joke.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,1);
        VoicePlay("B040624202_06_030");
        MsgDisp("Himuro","...Wait here.
I'll cook another batch.");
        MsgDisp("主人公","Eh, that would be such a waste!");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040624202_06_040");
        MsgDisp("Himuro","That's true but...
Then, you should eat only 
the nicely cooked parts.");
        MsgDisp("主人公","Thanks.
But, let's eat the burnt
parts together?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040624202_06_050");
        MsgDisp("Himuro","Eh?");
        MsgDisp("主人公","Since we came here together.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        VoicePlay("B040624202_06_060");
        MsgDisp("Himuro","...Ah, I see.
Then, do as you'd like.");
        MsgDisp("主人公","Okay.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040624202_06_070");
        MsgDisp("Himuro","..................");
        MsgDisp("主人公","Huh?
Your face is red.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040624202_06_080");
        MsgDisp("Himuro","That's just your imagination.
Or maybe you're seeing things.
That's all.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0,1);
    VoicePlay("B040624202_06_090");
    MsgDisp("Himuro","Thanks for saying that.
...No, that wasn't sarcastic.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(4);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040624202_06_100");
    MsgDisp("Himuro","Well, this isn't something I can normally 
experience. If I just think of this 
as another memory, it's not bad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
