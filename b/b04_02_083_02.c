BGOpen("fp200",0);
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
ScrFadeIn(0);
VoicePlay("B040208302_02_000");
MsgDisp("Sassa","This is quite transparent, hey, you can
even see the aquatic plants swaying.");
MsgSel("It's like it's not in the water","The fish are completely visible too","I'd like to watch while floating on a boat.");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208302_02_010");
    MsgDisp("Sassa","Yeah, it's a strange optical illusion.
It's like trick art, it's interesting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040208302_02_020");
    MsgDisp("Sassa","You say interesting things from time to
time.
It's in plain sight indeed.");
    MsgDispSksp(1,0);
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
        ChMotion(2,4);
        VoicePlay("B040208302_02_030");
        MsgDisp("Sassa","I get it, but that's how you destroy the
environment. After this point, it's the
firefly house right?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208302_02_040");
        MsgDisp("Sassa","There was a boat near the water fountain
though...");
        MsgDisp("主人公","Does ｛颯砂＊＊｝ not like them?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040208302_02_050");
        MsgDisp("Sassa","Boats are fine.
But those swan paddling boats are all
sorts of challenging.");
        MsgDisp("主人公","Do you dislike it?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,4);
        VoicePlay("B040208302_02_060");
        MsgDisp("Sassa","It's physically tough for me.
With my height, I have to bend my neck and
stick it out to get on.");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,0);
        VoicePlay("B040208302_02_070");
        MsgDisp("Sassa","The swans would look like they have two
necks won't they?");
        MsgDisp("主人公","Eh...
Hehe!");
        ChEye(2,0);
        ChMouth(2,3);
        ChMotion(2,3);
        VoicePlay("B040208302_02_080");
        MsgDisp("Sassa","Imagine it, don't laugh at me!");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040208302_02_090");
        MsgDisp("Sassa","Plus, I can't get both legs in so I have
to paddle with one foot....
Haa...");
        MsgDisp("主人公","(I kind of want to see this...?)");
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
