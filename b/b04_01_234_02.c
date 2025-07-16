BGOpen("tr450",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(1,255,0,0,3,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("B040123402_01_000");
MsgDisp("Kazama","That was quite the intense tea time wasn't
it?");
MsgSel("Eh, isn't it coffee?","Would you like another helping?","Let's take a little break");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123402_01_010");
    MsgDisp("Kazama","What, what's with that?
You're suddenly getting caught up with
minor details.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,1);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123402_01_020");
        MsgDisp("Kazama","Don't say it like that.
Your feet are wobbling.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123402_01_030");
        MsgDisp("Kazama","Thanks.
Then, I shall have another cup.");
        MsgDisp("主人公","Hehe, yeah.");
        ChMotion(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040123402_01_040");
        MsgDisp("Kazama","They had these sorts of rides back in
England, but teacups were the norm, not
coffee.");
        MsgDisp("主人公","Tea huh, how wonderful.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,4);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123402_01_050");
        MsgDisp("Kazama","Wonderful?
It wasn't my favorite.");
        MsgDisp("主人公","Do you dislike this ride?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040123402_01_060");
        MsgDisp("Kazama","No, it's fun now. Back then, it wasn't
just this one, amusement parks themselves
weren't that great.");
        MsgDisp("主人公","｛風真＊＊｝?");
        ChEye(1,4);
        ChMouth(1,3);
        ChMotion(1,0);
        VoicePlay("B040123402_01_070");
        MsgDisp("Kazama","Don't make that face.
Places like this are designed for a man
and a woman to have fun together.");
        ChEye(1,2);
        ChMouth(1,0);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040123402_01_080");
        MsgDisp("Kazama","Then, I would end up remembering that, and
it caused some trouble for my Mum and Dad.
Well, I was a brat.");
        MsgDisp("主人公","I see, you moved abroad when you were only
in your first year of Elementary School
after all.");
        ChMotion(1,0);
        Wait(8,0);
        ChEye(1,4);
        ChMouth(1,3);
        VoicePlay("B040123402_01_090");
        MsgDisp("Kazama","That's why, I'm making up for it now.");
        MsgDisp("主人公","Hehe, yeah.");
        ChEye(1,0);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040123402_01_100");
        MsgDisp("Kazama","Hey, do you want a second helping?");
        MsgDisp("主人公","(｛風真＊＊｝, you were thinking of me even
in England.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040123402_01_110");
    MsgDisp("Kazama","Are you alright?
You were spinning the handle too much.");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
