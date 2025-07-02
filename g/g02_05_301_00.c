MsgClose();
ChOpen(5,255,4,0,4,-1,-1,0,0);
VoicePlay("G020530100_05_000");
MsgDisp("Hiiragi","There are an incredible number of
fireflies out tonight.");
MsgDisp("主人公","Yeah, it's overwhelming, huh.");
ChMotion(5,0);
VoicePlay("G020530100_05_010");
MsgDisp("Hiiragi","By the way, there's been quite an increase
around you lately as well.");
MsgDisp("主人公","What has?");
ChMotion(5,4);
VoicePlay("G020530100_05_020");
MsgDisp("Hiiragi","In terms of friends. Have you made more?
Well, I'm one of them, of course.");
MsgDisp("主人公","Yeah, I think maybe I talk to more people
now.");
ChEye(5,3);
VoicePlay("G020530100_05_030");
MsgDisp("Hiiragi","Yes, thanks to you,
I've made more acquaintances too. 
I'm benefiting from it.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020530100_05_040");
MsgDisp("Hiiragi","If someone like you became student council
president, Haba School would become even
more wonderful");
MsgDisp("主人公","Ehh, me as student council president?");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G020530100_05_050");
MsgDisp("Hiiragi","There's no need to be so surprised. If you
decide to run, I'll support you on behalf
of the student council executive
committee.");
ChEye(5,3);
VoicePlay("G020530100_05_060");
MsgDisp("Hiiragi","Although you might not need such support,
right?");
MsgDisp("主人公","It's not that though...... If the student
council committee were to show support,
wouldn't that be breaking the rules?");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,3);
ChEyeOpenLevel(5,9);
VoicePlay("G020530100_05_070");
MsgDisp("Hiiragi","Haa, I see. 
That was dangerous. 
I almost made a major rule violation.");
ChEye(5,2);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,-1);
VoicePlay("G020530100_05_080");
MsgDisp("Hiiragi","It's regrettable, 
although I cannot support you.");
MsgDisp("主人公","(......Hm? When did it become a given that
I was even running for student council
president?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
