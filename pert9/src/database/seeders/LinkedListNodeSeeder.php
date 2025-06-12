<?php

namespace Database\Seeders;

use App\Models\LinkedListNode;
use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;

class LinkedListNodeSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $node1 = LinkedListNode::create(['value' => 'Node 1']);
        $node2 = LinkedListNode::create(['value' => 'Node 2']);
        $node3 = LinkedListNode::create(['value' => 'Node 3']);


        $node1->update(['next_id' => $Node2->id]);
        $node2->update(['next_id' => $Node3->id]);
    }
}
