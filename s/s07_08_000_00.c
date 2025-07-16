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
    MsgDisp("Shirahane","It's really the New Year, huh.
Everyone is so lively.");
    MsgDisp("主人公","Yeah, they are.");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S070800000_08_010");
    MsgDisp("Shirahane","Hm, we should go and say hello to God.
I'll stand in line with all my energy!");
    MsgDisp("主人公","Yeah!");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S070800000_08_020");
    MsgDisp("Shirahane","There are so many people.
As expected of New Years.");
    MsgDisp("主人公","Yeah");
    ChEye(8,0);
    ChMouth(8,0);
    VoicePlay("S070800000_08_030");
    MsgDisp("Shirahane","Visit the temple, draw fortunes......
What should we do?");
    MsgDisp("主人公","Hehe!
Here, let's keep moving, shall we?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S070800000_08_040");
    MsgDisp("Shirahane","You're right.
We can walk while we think about it!");
    break ;
    case 4:
    case 5:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    ScrFadeIn(0);
    VoicePlay("S070800000_08_050");
    MsgDisp("Shirahane","This is truly New Years!");
    MsgDisp("主人公","Does ｛大地＊＊｝ visit the
shrine every year?");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,3,1);
    VoicePlay("S070800000_08_060");
    MsgDisp("Shirahane","Yeah. With my older brother and sister.
And on our way home, we drink sweet and
warm sake.");
    MsgDisp("主人公","Heh......
That sounds nice!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S070800000_08_070");
    MsgDisp("Shirahane","It's sweet and tasty and it makes my hands
and body feel warm ......
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
