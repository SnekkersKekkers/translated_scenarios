BGOpen("ex020",0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070500000_05_000");
    MsgDisp("Hiiragi","I can feel everyone's thoughts and dreams
for the New Year.");
    MsgDisp("主人公","Yeah, the shrine is crowded...");
    ChMotion(5,0);
    VoicePlay("S070500000_05_010");
    MsgDisp("Hiiragi","Isn't it nice to be so lively?
Our shows are the same way.
I consider it a good luck charm.");
    MsgDisp("主人公","(As expected of the Chairman.
I hope the theater company will be
successful again this year.)");
    break ;
    case 3:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,2);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("S070500000_05_020");
    MsgDisp("Hiiragi","There are a lot of people.");
    MsgDisp("主人公","Wow, such long lines.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("S070500000_05_030");
    MsgDisp("Hiiragi","They are.
The shrine is full of everyone's thoughts
and prayers for the new year.");
    MsgDisp("主人公","That's right.
Let's not lose to them and make our own
wishes for the New Year!");
    ChEye(5,0);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("S070500000_05_040");
    MsgDisp("Hiiragi","That kind of energy.
If more people were like you, God would be
able to grant more wishes.");
    MsgDisp("主人公","(...｛柊＊＊＊｝, you surprisingly
like energetic people, huh?)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,3);
    ChLayout(1);
    ScrFadeIn(0);
    ChMotion(5,3,1);
    VoicePlay("S070500000_05_050");
    MsgDisp("Hiiragi","It's a successful turnout.");
    MsgDisp("主人公","Yeah, so many people...");
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S070500000_05_060");
    MsgDisp("Hiiragi","Don't get separated from me.
Let's hold hands.");
    MsgDisp("主人公","Eh...
Uhm...");
    ChMotion(5,4);
    VoicePlay("S070500000_05_070");
    MsgDisp("Hiiragi","Do you not want to hold hands?");
    MsgDisp("主人公","It isn't like that...");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("S070500000_05_080");
    MsgDisp("Hiiragi","What about linking arms?");
    MsgDisp("主人公","Huh?");
    ChEye(5,4);
    ChMouth(5,2);
    ChMotion(5,4);
    VoicePlay("S070500000_05_090");
    MsgDisp("Hiiragi","Do you not want to link arms either?");
    MsgDisp("主人公","Uhm, it's not like that, uhm.
What to do...
Ok then, with our hands.");
    ChEye(5,3);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("S070500000_05_100");
    MsgDisp("Hiiragi","That's fine.
Next year will be arms, okay?
Let's go.");
    MsgDisp("主人公","(My heart is racing...!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
