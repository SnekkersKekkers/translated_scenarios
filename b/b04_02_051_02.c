BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
ScrFadeIn(0);
VoicePlay("B040205102_02_000");
MsgDisp("Sassa","I've been thinking about what a new
version of this place would look like.");
MsgSel("Musical of the Stars♪","Haunted House Collab?","Pop-Up Planetarium!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B040205102_02_010");
    MsgDisp("Sassa","Eh, that's a unique idea.
I like it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(2,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040205102_02_020");
        MsgDisp("Sassa","That's not cool.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        ChEyeOpenLevel(2,7);
        VoicePlay("B040205102_02_030");
        MsgDisp("Sassa","That's sounds incredible.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,4);
        VoicePlay("B040205102_02_040");
        MsgDisp("Sassa","And they'll force you to watch scary
videos while you lay back in the chair.");
        MsgDisp("主人公","Eh?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040205102_02_050");
        MsgDisp("Sassa","That's also awesome.");
        MsgDisp("主人公","That's......
The same as a movie theater?");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,5);
        VoicePlay("B040205102_02_060");
        MsgDisp("Sassa","Oh......You're right. That's just a normal
horror movie. And what about the star
theme?");
        MsgDisp("主人公","Hehe.
Let's leave the horror movies to the movie
theaters, shall we?");
        ChEye(2,3);
        ChMouth(2,4);
        ChMotion(2,3);
        ChEyeOpenLevel(2,0);
        VoicePlay("B040205102_02_070");
        MsgDisp("Sassa","Yeah, agreed.
That would be easier to do than a complete
overhaul of the planetarium.");
        ChEye(2,0);
        ChMouth(2,4);
        ChMotion(2,3);
        VoicePlay("B040205102_02_080");
        MsgDisp("Sassa","How about we watch a movie next time?");
        MsgDisp("主人公","A horror movie?");
        ChEye(2,0);
        ChMouth(2,0);
        ChMotion(2,0);
        VoicePlay("B040205102_02_090");
        MsgDisp("Sassa","No......
A movie about stars or something.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(2);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B040205102_02_100");
    MsgDisp("Sassa","When the stars twinkle in my eyes it
blinds me, though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
