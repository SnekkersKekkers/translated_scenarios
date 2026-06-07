BGOpen("tr410",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0,1);
ScrFadeIn(0);
VoicePlay("B030323000_03_000");
MsgDisp("Honda","So, which ride's your favorite?");
MsgSel("The Roller Coaster sounds fun!","Let's ride the Ferris Wheel.","I want to try Bungee Jumping!","I want to ride the Tea Cups.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("B030323000_03_010");
    MsgDisp("Honda","Oh, that's your pick, huh?
Alright, let's go!");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr420",0);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    ScrFadeIn(0);
    VoicePlay("B030323000_03_020");
    MsgDisp("Honda","So far I'm feeling totally fine.");
    break ;
    case 1:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B030323000_03_030");
    MsgDisp("Honda","Yeah, sure thing.
My sister likes riding it too.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr430",0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    ScrFadeIn(0);
    VoicePlay("B030323000_03_040");
    MsgDisp("Honda","I like looking at the way it's built.
It kind of looks like spokes on a bicycle
wheel, don't you think?");
    break ;
    case 2:
    MsgDispSksp(1,0);
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("B030323000_03_050");
    MsgDisp("Honda","Sure, that sounds interesting.
Which do you want to leap from?");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr440",0);
    ChEye(3,5);
    ChMouth(3,1);
    ChMotion(3,5);
    ScrFadeIn(0);
    VoicePlay("B030323000_03_060");
    MsgDisp("Honda","W-Wait a second!
I need to brace myself first!");
    break ;
    case 3:
    MsgDispSksp(1,0);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,2);
    VoicePlay("B030323000_03_070");
    MsgDisp("Honda","Whoa, I didn't expect that one.");
    MsgDispSksp(0);
    SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
    MsgClose();
    ScrFadeOut(0);
    Wait(40);
    BGOpen("tr450",0);
    ChEye(3,4);
    ChMouth(3,2);
    ChMotion(3,4);
    ScrFadeIn(0);
    VoicePlay("B030323000_03_080");
    MsgDisp("Honda","Your inner ear's a really tough thing to
train, you know.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
