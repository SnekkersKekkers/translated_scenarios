BGOpen("wf110",0);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
ScrFadeIn(0);
ChMotion(8,2,1);
VoicePlay("B040801102_08_000");
MsgDisp("Shirahane","A cool guy would suit a stylish place like
this...");
MsgSel("Like a model?","That sort of thing doesn't matter!","Right!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("B040801102_08_010");
    MsgDisp("Shirahane","That's right, if only I was cool like the
high school model Nana...");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(4);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040801102_08_020");
    MsgDisp("Shirahane","I see... that's right!
I also like this place, so I should just
enjoy it earnestly!");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040801102_08_030");
        MsgDisp("Shirahane","I'm not enough...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,4,1);
        VoicePlay("B040801102_08_040");
        MsgDisp("Shirahane","Haa...
So it's like that after all.");
        MsgDisp("主人公","Why are you so down?");
        ChEye(8,2);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040801102_08_050");
        MsgDisp("Shirahane","I've come ta this place where I stick out
like a sore thumb many times, and I regret
it a lot...");
        MsgDisp("主人公","???");
        ChEye(8,2);
        ChMouth(8,0);
        ChMotion(8,2,1);
        VoicePlay("B040801102_08_060");
        MsgDisp("Shirahane","Don't look at me with such a strange look
on your face.");
        MsgDisp("主人公","That's because this isn't like
｛大地＊＊｝ at all.");
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,0,1);
        VoicePlay("B040801102_08_070");
        MsgDisp("Shirahane","Not like me...?");
        MsgDisp("主人公","Yeah.
Why do you think this place is cool or
that you're out of place here?");
        ChEye(8,1);
        ChMouth(8,4);
        ChMotion(8,4,1);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040801102_08_080");
        MsgDisp("Shirahane","Why...");
        ChEye(8,0);
        ChMouth(8,4);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040801102_08_090");
        MsgDisp("Shirahane","Seriously.
Why am I worried 'bout stuff like that?");
        MsgDisp("主人公","Hehe!");
        ChEye(8,2);
        ChMouth(8,3);
        ChMotion(8,0,1);
        VoicePlay("B040801102_08_100");
        MsgDisp("Shirahane","When I'm with you, I feel like I have to
look cool, that's probably why I was
worried about somethin' dumb like that.");
        ChEye(8,3);
        ChMouth(8,3);
        ChEyeOpenLevel(8,0);
        VoicePlay("B040801102_08_110");
        MsgDisp("Shirahane","Hehe!");
        MsgDisp("主人公","(I'm glad.
Looks like ｛大地＊＊｝ has
returned to normal.)");
        break ;
        default :
        DbgAssert(0);
        break ;
        }
    break ;
    default :
    DbgAssert(1);
    break ;
    }
