BGOpen("sc500",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, it's about time to head home.
...Huh?)");
VoicePlay("F100620002_06_000");
MsgDisp("Himuro?","I don't want to
stand in line again...");
VoicePlay("F100620002_03_000");
MsgDisp("Honda?","Really?
But good restaurants always
have lines, right?");
MsgDisp("主人公","(These voices...)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(3,254,0,0,0,-1,-1,0,2,0,30);
MsgDisp("主人公","｛氷室＊＊｝, ｛本多＊＊｝.
Are you talking about ramen shops?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620002_06_010");
MsgDisp("Himuro","Yeah, well.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,3);
VoicePlay("F100620002_03_010");
MsgDisp("Honda","Yeah, it was delicious.
Nori-kun seemed to really
like it too, right?");
MsgDisp("主人公","Is that so?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("F100620002_06_020");
MsgDisp("Himuro","Haa...
It just so happened that the instant
noodles I eat were a collaboration
product with that store..");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("F100620002_03_020");
MsgDisp("Honda","Yep yep, I guess you were yearning
for the flavour of the restaurant as you
were eating it, right? As the one who 
introduced it to you, I'm super happy!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F100620002_06_030");
MsgDisp("Himuro","I won't completely deny it.
But I prefer instant.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("F100620002_03_030");
MsgDisp("Honda","Ehh, really?
Then, I guess it'll just be you and me,
let's go together again!");
MsgDisp("主人公","Eh, me?
Hehe, yeah. Of course.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620002_06_040");
MsgDisp("Himuro","Eh?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,10);
VoicePlay("F100620002_06_050");
MsgDisp("Himuro","I just prefer instant,
but it doesn't mean I don't like 
the taste from the ones at restaurants.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("F100620002_03_040");
MsgDisp("Honda","Hm? Nori-kun too?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100620002_06_060");
MsgDisp("Himuro","...I'm going.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,0);
MsgDisp("主人公","(Hehe!
Surprisingly, these two 
make a good pair?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
