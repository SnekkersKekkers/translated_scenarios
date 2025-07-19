BGOpen("bh120",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(So this is ｛風真＊＊｝'s Grandpa's
Store...)");
MsgDisp("主人公","(I've known him for so long and yet I've
never been here...)");
VoicePlay("D020100100_01_000");
MsgDisp("Kazama?","This suspicious person has staring at our
store for a while now.");
MsgDisp("主人公","Eh...
Ah, ｛風真＊＊｝!");
MsgClose();
BGMPlay("BGM_C01_RYOUTA_A",0.01);
ChOpen(1,255,0,0,3,10,#1,0,0);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D020100100_01_010");
MsgDisp("Kazama","Door-to-door salesmen are not allowed.");
MsgDisp("主人公","Geez, it's not like that.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,3);
VoicePlay("D020100100_01_020");
MsgDisp("Kazama","What are you doing then?");
MsgDisp("主人公","Uhm, I wanted to showcase the store for my
part-time job at Habatcher.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D020100100_01_030");
MsgDisp("Kazama","Hmm, I get it.
Grandpa loves that sort of thing, so let
me ask him about it.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(1);
MsgClose();
ScrFadeOut(0,0);
SEWait();
SEPlay("EV_SE_DOOR_018");
BGMVol(0.5,2);
Wait(45,0);
BGOpen("bh130",0);
ChLayout(1);
ScrFadeIn(0);
Wait(30,1);
MsgDisp("主人公","(Woah...There are so many things here.
They must be expensive...Ah, they also
have some cute accessories.)");
SEWait();
MsgClose();
SEPlay("EV_SE_544");
ChOpen(1,255,0,0,3,#1,#1,0,0);
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("D020100100_01_040");
MsgDisp("Kazama","We have everything here.
Historical items that belong in museums,
children's toys, you name it.");
MsgDisp("主人公","Hehe, that's amazing.
You never run out of things to see.");
VoicePlay("D020100100_36_000");
MsgDisp("Ryota's Grandpa?","Welcome.");
ChMouth(1,0);
ChMotion(1,0);
ChPosition(1,1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
Wait(45,0);
ChOpen(36,254,0,0,0,#1,#1,0,2);
MsgDisp("主人公","Ah, it's nice to meet you.
I'm ｛主人公姓名｝.");
ChMouth(36,0);
VoicePlay("D020100100_36_010");
MsgDisp("Ryota's Grandpa","Yes, I know you.
For a long time now, you have been quite
the famous person in our family.");
ChEye(1,0);
ChMouth(1,2);
ChCheek(1,5);
MsgDisp("主人公","Eh?");
ChMouth(36,1);
ChMouthOpenLevel(36,5);
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,3);
ChCheek(1,5);
VoicePlay("D020100100_01_070");
MsgDisp("Kazama","Oh, Grandpa. She wants to write an article
on this place. That's okay, right?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
ChMouth(36,0);
MsgDisp("主人公","Ah, yes.
I work part-time for a magazine and was
wondering if I could get an interview.");
BGMStop(2);
MsgClose();
ScrFadeOut(0,0);
ChClose(36,0,0);
ChCheek(1,0);
ChPosition(1,0);
Wait(40,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc010",1);
ChLayout(1);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for today, ｛風真＊＊｝.
Sorry for showing up so suddenly.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D020100100_01_080");
MsgDisp("Kazama","It's fine. Grandpa was happy to do so and
wanted me to thank you. So, thank you.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D020100100_01_090");
MsgDisp("Kazama","Okay, I have to go clean up back at the
store now.
Be careful on your way home, okay?");
BGMStop();
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(Okay, I got a good interview...)");
MsgDisp("主人公","(Come to think of it, his Grandpa said I
was a famous person.
I wonder what he meant by that...)");
MsgClose();
ScrFadeOut(0,0);
