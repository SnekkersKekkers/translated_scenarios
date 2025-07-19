ChOpen(3,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("N020300001_03_000");
    MsgDisp("Honda","Nice job on your final exams.
Isn't that your name among the top?");
    MsgDisp("主人公","Thank you very much.
But, ｛本多＊＊｝, aren't you the first in
our grade?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("N020300001_03_010");
    MsgDisp("Honda","Ah, really?
Thank you for letting me know!");
    MsgDisp("主人公","(He's indifferent to his own ranking?
I have to do my best too!)");
    break ;
    case 3:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("N020300001_03_020");
    MsgDisp("Honda","Your name is among the top, right?");
    MsgDisp("主人公","Ah, ｛本多＊＊｝.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("N020300001_03_030");
    MsgDisp("Honda","It's truly amazing to put in the effort
and see those results pay off.
Nice work!");
    MsgDisp("主人公","(｛本多＊＊｝ you made it sound even more
impressive but...yeah, I did my best!)");
    break ;
    case 4:
    case 5:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("N020300001_03_040");
    MsgDisp("Honda","Well done on your performance in the final
exams!
Are you glad you worked so hard?");
    MsgDisp("主人公","Yeah, thank you ｛本多＊＊｝!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("N020300001_03_050");
    MsgDisp("Honda","Maybe you could be the first among all the
students in our grade.");
    MsgDisp("主人公","Eh, but it's you ｛本多＊＊｝, the first in
the rank...");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0);
    VoicePlay("N020300001_03_060");
    MsgDisp("Honda","Huh?
Ah, I didn't know!");
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,3);
    VoicePlay("N020300001_03_070");
    MsgDisp("Honda","But I'd love to see you pass me.
You would be the best rival ever!");
    MsgDisp("主人公","(｛本多＊＊｝, I'm also rooting for you.
Alright, I'll aim for the top!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
