BGMPlay("BGM_SPORTS_DAY");
BGOpen("sc760",0);
MsgClose();
ChOpen(3,30,0,0,0,-1,-1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("O030300000_03_000");
    MsgDisp("Honda","I didn't expect that!
We might just be super compatible?");
    MsgDisp("主人公","(We did it!
I'm glad I did my best!)");
    break ;
    case 3:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("O030300000_03_010");
    MsgDisp("Honda","We're first place......!?");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,1);
    VoicePlay("O030300000_03_020");
    MsgDisp("Honda","Are you secretly really fast?
Or was everyone else feeling unwell?");
    ChSet(3,3);
    VoicePlay("O030300000_03_030");
    MsgDisp("Honda","Well, it doesn't matter!
Anyways, we won! Yay!");
    MsgDisp("主人公","(We did it!
I got first place with ｛本多＊＊｝!)");
    break ;
    case 4:
    case 5:
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("O030300000_03_040");
    MsgDisp("Honda","We got first in the
three-legged race!?");
    ChSet(3,3);
    VoicePlay("O030300000_03_050");
    MsgDisp("Honda","This never would've happened
if it wasn't for you!
You really are the best!");
    MsgDisp("主人公","Hehe, we did it!");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,2);
    ChCheek(3,8);
    VoicePlay("O030300000_03_060");
    MsgDisp("Honda","......Hm, hm? My heart was racing
from running, but it feels like it's
racing from something else, now......");
    MsgDisp("主人公","Huh, are you okay?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    ChCheek(3,0);
    VoicePlay("O030300000_03_070");
    MsgDisp("Honda","......I see.
This is what's making my heart pound.
Your smile is making my heart flutter.");
    MsgDisp("主人公","Eeeeehhh!!!");
    MsgDisp("主人公","(He just said something amazing......
I'm glad I got first with ｛本多＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
