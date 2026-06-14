BGOpen("ex020",0);
ChLayout(1);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S070800000_08_000");
    MsgDisp("Shirahane","Sure feels like New Year's, huh.
Everybody's lookin' so lively.");
    MsgDisp("主人公","Yeah, they are.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S070800000_08_010");
    MsgDisp("Shirahane","Alright, let's go say hi to the gods.
I'm gonna put my whole heart into standin' in
line!");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S070800000_08_020");
    MsgDisp("Shirahane","There are so many people.
Just what I'd expect from New Year's.");
    MsgDisp("主人公","Yeah");
    ChEye(8,0);
    ChMouth(8,0);
    VoicePlay("S070800000_08_030");
    MsgDisp("Shirahane","Visit the temple, draw fortunes...
What should we do?");
    MsgDisp("主人公","Hehe!
Here, let's keep moving, shall we?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S070800000_08_040");
    MsgDisp("Shirahane","You're right.
We can think about it while we're walkin'!");
    break ;
    case 4:
    case 5:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S070800000_08_050");
    MsgDisp("Shirahane","Now this is New Year's!");
    MsgDisp("主人公","Does ｛Daichi＊＊｝ visit the shrine every
year?");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("S070800000_08_060");
    MsgDisp("Shirahane","Yeah.
With my big bro and sis. And on the way home,
we drink nice warm sweet sake.");
    MsgDisp("主人公","Ooh...
That sounds nice!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S070800000_08_070");
    MsgDisp("Shirahane","It's sweet and tasty, and it warms up your
hands and body...
Ah.");
    ChEye(8,0);
    ChMouth(8,3);
    VoicePlay("S070800000_08_080");
    MsgDisp("Shirahane","Wanna hold hands?");
    MsgDisp("主人公","Eh, sure.");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,5);
    VoicePlay("S070800000_08_090");
    MsgDisp("Shirahane","Haha.
It's warm like this, right?");
    MsgDisp("主人公","Hehe, yeah!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
