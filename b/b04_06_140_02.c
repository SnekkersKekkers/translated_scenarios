BGOpen("ne210",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,3);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040614002_06_000");
MsgDisp("Himuro","To think that... the third song was 
arranged into a ballad.
I can't believe it.");
MsgSel("Was it different to the original?","It doesn't suit it huh?","It wasn't bad.");
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
        ChMotion(6,0);
        VoicePlay("B040614002_06_010");
        MsgDisp("Himuro","You didn't prepare enough.
That's all.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040614002_06_020");
        MsgDisp("Himuro","You haven't heard of it before?");
        MsgDisp("主人公","Yeah.
But, I didn't feel out of place.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040614002_06_030");
        MsgDisp("Himuro","I see. 
So first time listeners can listen 
to it without any problems.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,4);
        VoicePlay("B040614002_06_040");
        MsgDisp("Himuro","That's why you might be surprised when you
hear the original song. You should
definitely listen to the original. I'd
like to know what you think.");
        MsgDisp("主人公","Yeah, got it.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        ChCheek(6,10);
        VoicePlay("B040614002_06_050");
        MsgDisp("Himuro","...If you'd like, 
I can lend the CD to you?");
        MsgDisp("主人公","Eh, is that okay?
Thank you.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040614002_06_060");
        MsgDisp("Himuro","It's no problem.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        VoicePlay("B040614002_06_070");
        MsgDisp("Himuro","I... would also be happy if the CD sparked
a conversation on this same topic.");
        MsgDisp("主人公","Hehe, yeah!");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040614002_06_080");
    MsgDisp("Himuro","It definitely felt like a challenge.
...But, I think i like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,3);
    ChMouth(6,3);
    ChMotion(6,3);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040614002_06_090");
    MsgDisp("Himuro","Yeah.
It completely changed the impression, 
but it wasn't bad.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
