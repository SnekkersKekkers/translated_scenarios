BGOpen("bh110",0);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("B040130002_01_000");
MsgDisp("Kazama","It feels like we've travelled 
back in time, right? Nothing has changed
about this room after all.");
MsgSel("This doesn't feel like an elementary schooler's room.","I think I remember that hat","\"Ryota\" is written next to that desk, right?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("B040130002_01_010");
    MsgDisp("Kazama","I've been messing around with it
a lot these past few months.
But it still feels nostalgic, right?");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040130002_01_020");
        MsgDisp("Kazama","Oi, all elementary school kids have the
same safety helmets, right?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,1);
        BGMPlay("BGM_C01_RYOUTA_C",0.01);
        VoicePlay("B040130002_01_030");
        MsgDisp("Kazama","Yeah,it was hard to dispose of, 
so I held onto it.");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040130002_01_040");
        MsgDisp("Kazama","I went to England soon after, 
So I only wore it for a few months.");
        MsgDisp("主人公","That's right...");
        ChMotion(1,0);
        Wait(8,0);
        ChEye(1,2);
        ChMouth(1,3);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040130002_01_050");
        MsgDisp("Kazama","Why are you so down?
I was able to return, and this
room is the same as before.");
        MsgDisp("主人公","Yeah.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        VoicePlay("B040130002_01_060");
        MsgDisp("Kazama","And you're the same as before. Actually,
above my imagination actually.");
        MsgDisp("主人公","I see,
we've grown quite a lot.");
        ChEye(1,4);
        ChMouth(1,4);
        ChMotion(1,4);
        ChCheek(1,7);
        VoicePlay("B040130002_01_070");
        MsgDisp("Kazama","G-Grown...
That's true. But, I'm talking about
what's inside, not outside.");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040130002_01_080");
        MsgDisp("Kazama","Ahh... geez.
What am I even saying...");
        ChEye(1,0);
        ChMouth(1,1);
        ChMotion(1,0);
        ChEyeOpenLevel(1,8);
        ChCheek(1,0);
        VoicePlay("B040130002_01_090");
        MsgDisp("Kazama","I take back what I said at the beginning
about time travel. This room is completely
different now from the old one. You being
here made me realize that.");
        MsgDisp("主人公","Me?");
        ChEye(1,0);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,5);
        VoicePlay("B040130002_01_100");
        MsgDisp("Kazama","Right, you. Being here with the you, who
has grown up gives me feelings that I
didn't have as a child.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,0);
        VoicePlay("B040130002_01_110");
        MsgDisp("Kazama","You're not just the cute girl 
from the neighborhood who was 
my friend now.");
        MsgDisp("主人公","I'm now——");
        ChEye(1,1);
        ChMouth(1,1);
        ChMotion(1,3);
        ChEyeOpenLevel(1,0);
        ChCheek(1,10);
        Wait(8,0);
        ChMotion(1,1);
        VoicePlay("B040130002_01_120");
        MsgDisp("Kazama","Why would I tell you, idiot?
I'm not saying it, idiot!");
        MsgDisp("主人公","(Ugh... I got scolded...
But, my heart is racing somehow...)");
        BGMStop();
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    ChCheek(1,5);
    Wait(8,0);
    ChMotion(1,1);
    VoicePlay("B040130002_01_130");
    MsgDisp("Kazama","Wait, where?
It's fine if it's just my name.");
    MsgDispBGSksp(1,2);
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    MsgDispBGSksp(0);
    ChCheek(1,0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
